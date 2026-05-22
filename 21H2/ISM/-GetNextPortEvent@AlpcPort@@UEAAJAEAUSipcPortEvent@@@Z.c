/*
 * XREFs of ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0BA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18006600C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF4A0 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800BFB8C (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BFC4C (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800C01F0 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x1800C0344 (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x1800C04FC (-DisconnectAllSections@SipcPort@@IEAAXXZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C0720 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800C084C (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800C09A0 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800C0B28 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?GetValue@?$SerializedIntegral@I@@QEBAIXZ @ 0x1800C113C (-GetValue@-$SerializedIntegral@I@@QEBAIXZ.c)
 *     ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x1800C1690 (-PopFront@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800C17B8 (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C1940 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

__int64 __fastcall AlpcPort::GetNextPortEvent(AlpcPort *this, struct SipcPortEvent *a2)
{
  char *v3; // r12
  __int16 *v5; // r13
  __int64 v6; // rbx
  int v7; // r14d
  __int16 v8; // cx
  signed int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r14d
  __int64 v15; // r14
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  struct SipcPort::SectionListEntry *SectionListEntry; // r15
  int v19; // r15d
  __int64 v20; // rax
  struct SipcPort::SectionListEntry *v21; // rax
  int v22; // eax
  int Value; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int16 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+84h] [rbp-7Ch]
  _BYTE v33[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v34[72]; // [rsp+D8h] [rbp-28h] BYREF

  v3 = (char *)this + 424;
  v5 = (__int16 *)((char *)this + 88);
  v6 = 0LL;
  while ( 1 )
  {
    v27 = 332LL;
    v26 = 0LL;
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 42) = 0LL;
    v5[1] = 40;
    *((_DWORD *)v5 + 84) = 1610612736;
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int16 *, __int64 *, char *, __int64 *))NtAlpcSendWaitReceivePort)(
           *((_QWORD *)this + 7),
           0LL,
           0LL,
           0LL,
           v5,
           &v27,
           v3,
           &v26);
    if ( v7 )
      break;
    v8 = *((_WORD *)this + 46);
    v9 = v8 & 0xFFFF00FF;
    if ( v9 == 3 )
    {
      if ( (*((_DWORD *)this + 107) & 0x40000000) != 0 )
      {
        v12 = *((_QWORD *)this + 7);
        v5[2] &= ~0x2000u;
        v28 = 0LL;
        v13 = ((__int64 (__fastcall *)(__int64, _QWORD, __int16 *, __int16 *, _QWORD, _QWORD, _QWORD, __int64 *, __int64, __int64))NtAlpcSendWaitReceivePort)(
                v12,
                0LL,
                v5,
                v5 + 168,
                0LL,
                0LL,
                0LL,
                &v28,
                v26,
                v27);
        if ( v13 >= 0 )
          v14 = 0;
        else
          v14 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v13);
        if ( v14 < 0 || (v14 = AlpcPort::FillSectionListEntryPool(this, 1uLL), v14 < 0) )
        {
          AlpcMessage::DiscardAttributes((AlpcMessage *)v5, *((void **)this + 7));
          *(_DWORD *)a2 = 0;
          return (unsigned int)v14;
        }
        v15 = NtList<AlpcPort::AlpcSectionListEntry>::PopFront((char *)this + 64);
        *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 56);
        *(_QWORD *)(v15 + 32) = *((_QWORD *)this + 57);
        *((_DWORD *)this + 107) &= ~0x40000000u;
        v16 = *(_QWORD *)(v15 + 32) - 40LL;
        *(_DWORD *)(v15 + 48) = *((_DWORD *)this + 24);
        v17 = (_QWORD *)(*(_QWORD *)(v15 + 24) + (v16 & 0xFFFFFFFFFFFFFFF8uLL));
        *(_DWORD *)(v15 + 52) = *((_DWORD *)this + 26);
        *(_QWORD *)(v15 + 40) = *v17;
        SectionListEntry = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)(v17 + 1));
        if ( (!SectionListEntry || *((_DWORD *)SectionListEntry + 12) != GetCurrentProcessId())
          && *(_QWORD *)(v15 + 32) >= ((*(_QWORD *)(v15 + 40) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40
          && *(_DWORD *)(v15 + 48)
          && *(_DWORD *)(v15 + 52) )
        {
          if ( SectionListEntry )
          {
            if ( *((_BYTE *)SectionListEntry + 57) )
              SectionListEntry = 0LL;
            else
              *((_WORD *)SectionListEntry + 28) = 257;
          }
          if ( !*((_BYTE *)this + 496) )
            SipcPort::ProtectUnusedSectionMemory((struct SipcPort::SectionListEntry *)v15);
          SipcPort::AddSectionListEntry(this, (struct SipcPort::SectionListEntry *)v15);
          *((_QWORD *)a2 + 1) = *(_QWORD *)(v15 + 24);
          if ( SectionListEntry )
            v25 = *((_QWORD *)SectionListEntry + 3);
          else
            v25 = 0LL;
          *((_QWORD *)a2 + 2) = v25;
          *((_QWORD *)a2 + 3) = *(_QWORD *)(v15 + 40);
          LOBYTE(v6) = SectionListEntry != 0LL;
          *((_DWORD *)a2 + 8) = v6;
          *((_DWORD *)a2 + 9) = *(_DWORD *)(v15 + 48);
          v22 = *(_DWORD *)(v15 + 52);
LABEL_35:
          *(_DWORD *)a2 = 6;
          *((_DWORD *)a2 + 10) = v22;
          return 0LL;
        }
        v19 = AlpcPort::AlpcSectionListEntry::DestroySection((AlpcPort::AlpcSectionListEntry *)v15);
        if ( v19 < 0 )
        {
          AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v15, 1);
          result = (unsigned int)v19;
          *(_DWORD *)a2 = 0;
          return result;
        }
        AlpcPort::AlpcSectionListEntry::FreeSectionEntry((AlpcPort::AlpcSectionListEntry *)v15);
      }
      else
      {
        if ( (v8 & 0x2000) != 0 )
          AlpcMessage::Cancel((AlpcMessage *)v5, *((void **)this + 7));
        v20 = *v5;
        if ( *v5 < 0 )
          v20 = 0LL;
        if ( v20 == 32 )
        {
          memset(v29, 0, sizeof(v29));
          AlpcMessage::GetMessageData((AlpcMessage *)v5, 0x20uLL, (char *)v29);
          v21 = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)v29);
          if ( v21 )
          {
            *((_WORD *)v21 + 28) = 257;
            *((_QWORD *)a2 + 1) = *((_QWORD *)v21 + 3);
            *((_QWORD *)a2 + 2) = 0LL;
            *((_QWORD *)a2 + 3) = *((_QWORD *)v21 + 5);
            *((_DWORD *)a2 + 8) = 2;
            *((_DWORD *)a2 + 9) = *((_DWORD *)v21 + 12);
            v22 = *((_DWORD *)v21 + 13);
            goto LABEL_35;
          }
        }
      }
    }
    else
    {
      if ( v9 <= 3 )
        goto LABEL_8;
      if ( v9 <= 5 )
      {
        SipcPort::DisconnectAllSections(this);
        if ( (*((_DWORD *)this + 107) & 0x20000000) != 0 )
        {
          v24 = *((_QWORD *)this + 58);
          if ( v24 == *((_QWORD *)this + 7) )
            v24 = 0LL;
          v6 = v24;
        }
        *((_QWORD *)a2 + 1) = v6;
        *(_DWORD *)a2 = 3;
        return 0LL;
      }
      if ( v9 == 10 )
      {
        v11 = *v5;
        if ( *v5 < 0 )
          v11 = 0LL;
        if ( v11 == 164 )
        {
          v30 = 0LL;
          v31 = 0;
          v32 = 0LL;
          memset_0(v33, 0, sizeof(v33));
          memset_0(v34, 0, 0x44uLL);
          AlpcMessage::GetMessageData((AlpcMessage *)v5, 0xA4uLL, (char *)&v30);
          Value = SerializedIntegral<unsigned int>::GetValue((char *)&v30 + 6);
          *((_DWORD *)a2 + 2) = *((_DWORD *)this + 24);
          if ( !Value )
            Value = *((_DWORD *)this + 26);
          *((_DWORD *)a2 + 3) = Value;
          *(_DWORD *)a2 = 2;
          return 0LL;
        }
        AlpcPort::RejectClientConnection(this);
      }
      else if ( v9 != 12 )
      {
LABEL_8:
        if ( (v8 & 0x2000) != 0 )
        {
          AlpcMessage::Cancel((AlpcMessage *)v5, *((void **)this + 7));
          v8 = *((_WORD *)this + 46);
        }
        *(_DWORD *)a2 = 1;
        *((_DWORD *)a2 + 2) = v8 & 0xFFFF00FF;
        return 2147549183LL;
      }
    }
  }
  *(_DWORD *)a2 = 0;
  if ( v7 != 258 && v7 != -1073741823 )
  {
    v14 = v7 | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  return 1LL;
}
