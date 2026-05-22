/*
 * XREFs of ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFF90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800BFC1C (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?ComputeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x1800BFDF8 (-ComputeFromData@SipcSectionId@@QEAAJ_KPEBX@Z.c)
 *     ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C0734 (-FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C07B0 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800C08DC (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?InitializeSectionMemory@SipcPort@@KAXPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800C1260 (-InitializeSectionMemory@SipcPort@@KAXPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x1800C1720 (-PopFront@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800C1848 (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800C1CAC (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

int __fastcall AlpcPort::CreateSection(AlpcPort *this, __int64 a2, ULONG a3, UCHAR *a4, void **a5)
{
  int result; // eax
  int v10; // eax
  bool v11; // sf
  __int64 v12; // rcx
  int PortSection; // eax
  int v14; // edx
  unsigned __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rbx
  DWORD CurrentThreadId; // eax
  int v19; // eax
  __int128 v20; // [rsp+30h] [rbp-31h] BYREF
  __int128 v21; // [rsp+40h] [rbp-21h] BYREF
  UCHAR pbBuffer[16]; // [rsp+50h] [rbp-11h] BYREF
  __int128 v23; // [rsp+60h] [rbp-1h]

  *a5 = 0LL;
  result = AlpcPort::FillSectionListEntryPool(this, 1uLL);
  if ( result >= 0 )
  {
    *(_OWORD *)pbBuffer = 0LL;
    v23 = 0LL;
    if ( a4 )
    {
      result = SipcSectionId::ComputeFromData(pbBuffer, a3, a4);
      if ( result < 0 )
        return result;
      if ( SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)pbBuffer) )
        return -2147024809;
LABEL_11:
      v12 = *((_QWORD *)this + 7);
      v20 = 0LL;
      v21 = 0LL;
      PortSection = NtAlpcCreatePortSection(
                      v12,
                      0LL,
                      0LL,
                      ((a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 40,
                      (char *)&v20 + 8,
                      (char *)&v21 + 8,
                      0LL);
      if ( PortSection >= 0 )
      {
        v16 = NtAlpcCreateSectionView(*((_QWORD *)this + 7), 0LL, &v20);
        if ( v16 >= 0 )
        {
          v17 = NtList<AlpcPort::AlpcSectionListEntry>::PopFront((char *)this + 64);
          *(_OWORD *)(v17 + 24) = v21;
          *(_QWORD *)(v17 + 40) = a2;
          *(_DWORD *)(v17 + 48) = GetCurrentProcessId();
          CurrentThreadId = GetCurrentThreadId();
          *(_BYTE *)(v17 + 58) = 1;
          *(_DWORD *)(v17 + 52) = CurrentThreadId;
          *(_QWORD *)(v17 + 72) = *((_QWORD *)&v20 + 1);
          SipcPort::InitializeSectionMemory(
            (struct SipcPort::SectionListEntry *)v17,
            (const struct SipcSectionId *)pbBuffer);
          SipcPort::ProtectUnusedSectionMemory((struct SipcPort::SectionListEntry *)v17);
          SipcPort::AddSectionListEntry(this, (struct SipcPort::SectionListEntry *)v17);
          *a5 = *(void **)(v17 + 24);
          return 0;
        }
        v19 = NtAlpcDeletePortSection(*((_QWORD *)this + 7), 0LL, *((_QWORD *)&v20 + 1));
        if ( v19 < 0 )
        {
          wil::details::in1diag0::FailFast_Hr((wil::details::in1diag0 *)(unsigned int)v19, v14);
          __debugbreak();
        }
        v15 = (unsigned int)v16;
      }
      else
      {
        v15 = (unsigned int)PortSection;
      }
      return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)v15, v14);
    }
    else
    {
      while ( 1 )
      {
        v10 = BCryptGenRandom(0LL, pbBuffer, 0x20u, 2u);
        if ( v10 < 0 )
        {
          result = RtlNtStatusToDosError(v10);
          v11 = result < 0;
          if ( result > 0 )
          {
            result = (unsigned __int16)result | 0x80070000;
            v11 = result < 0;
          }
          if ( v11 )
            break;
        }
        if ( !SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)pbBuffer) )
          goto LABEL_11;
      }
    }
  }
  return result;
}
