/*
 * XREFs of ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0770
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18006595C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF070 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800BF75C (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BF81C (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800BFDC0 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x1800BFF14 (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?DisconnectAllSections@SipcPort@@IEAAXXZ @ 0x1800C00CC (-DisconnectAllSections@SipcPort@@IEAAXXZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C02F0 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800C041C (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800C0570 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800C06F8 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?GetValue@?$SerializedIntegral@I@@QEBAIXZ @ 0x1800C0D0C (-GetValue@-$SerializedIntegral@I@@QEBAIXZ.c)
 *     ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x1800C1260 (-PopFront@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800C1388 (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C1510 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C17B0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall AlpcPort::GetNextPortEvent(AlpcPort *this, struct SipcPortEvent *a2)
{
  char *v3; // r12
  __int16 *v5; // r13
  __int64 v6; // rbx
  int v7; // edx
  int v8; // r14d
  __int16 v9; // cx
  signed int v10; // eax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r14d
  __int64 v16; // r14
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  struct SipcPort::SectionListEntry *SectionListEntry; // r15
  int v20; // r15d
  __int64 v21; // rax
  struct SipcPort::SectionListEntry *v22; // rax
  int v23; // eax
  int Value; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int16 v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+84h] [rbp-7Ch]
  _BYTE v34[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v35[72]; // [rsp+D8h] [rbp-28h] BYREF

  v3 = (char *)this + 424;
  v5 = (__int16 *)((char *)this + 88);
  v6 = 0LL;
  while ( 1 )
  {
    v28 = 332LL;
    v27 = 0LL;
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 42) = 0LL;
    v5[1] = 40;
    *((_DWORD *)v5 + 84) = 1610612736;
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int16 *, __int64 *, char *, __int64 *))NtAlpcSendWaitReceivePort)(
           *((_QWORD *)this + 7),
           0LL,
           0LL,
           0LL,
           v5,
           &v28,
           v3,
           &v27);
    if ( v8 )
      break;
    v9 = *((_WORD *)this + 46);
    v10 = v9 & 0xFFFF00FF;
    if ( v10 == 3 )
    {
      if ( (*((_DWORD *)this + 107) & 0x40000000) != 0 )
      {
        v13 = *((_QWORD *)this + 7);
        v5[2] &= ~0x2000u;
        v29 = 0LL;
        v14 = ((__int64 (__fastcall *)(__int64, _QWORD, __int16 *, __int16 *, _QWORD, _QWORD, _QWORD, __int64 *, __int64, __int64))NtAlpcSendWaitReceivePort)(
                v13,
                0LL,
                v5,
                v5 + 168,
                0LL,
                0LL,
                0LL,
                &v29,
                v27,
                v28);
        if ( v14 >= 0 )
          v15 = 0;
        else
          v15 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v14);
        if ( v15 < 0 || (v15 = AlpcPort::FillSectionListEntryPool(this, 1uLL), v15 < 0) )
        {
          AlpcMessage::DiscardAttributes((AlpcMessage *)v5, *((void **)this + 7));
          *(_DWORD *)a2 = 0;
          return (unsigned int)v15;
        }
        v16 = NtList<AlpcPort::AlpcSectionListEntry>::PopFront((char *)this + 64);
        *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 56);
        *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 57);
        *((_DWORD *)this + 107) &= ~0x40000000u;
        v17 = *(_QWORD *)(v16 + 32) - 40LL;
        *(_DWORD *)(v16 + 48) = *((_DWORD *)this + 24);
        v18 = (_QWORD *)(*(_QWORD *)(v16 + 24) + (v17 & 0xFFFFFFFFFFFFFFF8uLL));
        *(_DWORD *)(v16 + 52) = *((_DWORD *)this + 26);
        *(_QWORD *)(v16 + 40) = *v18;
        SectionListEntry = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)(v18 + 1));
        if ( (!SectionListEntry || *((_DWORD *)SectionListEntry + 12) != GetCurrentProcessId())
          && *(_QWORD *)(v16 + 32) >= ((*(_QWORD *)(v16 + 40) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40
          && *(_DWORD *)(v16 + 48)
          && *(_DWORD *)(v16 + 52) )
        {
          if ( SectionListEntry )
          {
            if ( *((_BYTE *)SectionListEntry + 57) )
              SectionListEntry = 0LL;
            else
              *((_WORD *)SectionListEntry + 28) = 257;
          }
          if ( !*((_BYTE *)this + 496) )
            SipcPort::ProtectUnusedSectionMemory((struct SipcPort::SectionListEntry *)v16);
          SipcPort::AddSectionListEntry(this, (struct SipcPort::SectionListEntry *)v16);
          *((_QWORD *)a2 + 1) = *(_QWORD *)(v16 + 24);
          if ( SectionListEntry )
            v26 = *((_QWORD *)SectionListEntry + 3);
          else
            v26 = 0LL;
          *((_QWORD *)a2 + 2) = v26;
          *((_QWORD *)a2 + 3) = *(_QWORD *)(v16 + 40);
          LOBYTE(v6) = SectionListEntry != 0LL;
          *((_DWORD *)a2 + 8) = v6;
          *((_DWORD *)a2 + 9) = *(_DWORD *)(v16 + 48);
          v23 = *(_DWORD *)(v16 + 52);
LABEL_35:
          *(_DWORD *)a2 = 6;
          *((_DWORD *)a2 + 10) = v23;
          return 0LL;
        }
        v20 = AlpcPort::AlpcSectionListEntry::DestroySection((AlpcPort::AlpcSectionListEntry *)v16);
        if ( v20 < 0 )
        {
          AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v16, 1);
          result = (unsigned int)v20;
          *(_DWORD *)a2 = 0;
          return result;
        }
        AlpcPort::AlpcSectionListEntry::FreeSectionEntry((AlpcPort::AlpcSectionListEntry *)v16);
      }
      else
      {
        if ( (v9 & 0x2000) != 0 )
          AlpcMessage::Cancel((AlpcMessage *)v5, *((void **)this + 7));
        v21 = *v5;
        if ( *v5 < 0 )
          v21 = 0LL;
        if ( v21 == 32 )
        {
          memset(v30, 0, sizeof(v30));
          AlpcMessage::GetMessageData((AlpcMessage *)v5, 0x20uLL, (char *)v30);
          v22 = SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)v30);
          if ( v22 )
          {
            *((_WORD *)v22 + 28) = 257;
            *((_QWORD *)a2 + 1) = *((_QWORD *)v22 + 3);
            *((_QWORD *)a2 + 2) = 0LL;
            *((_QWORD *)a2 + 3) = *((_QWORD *)v22 + 5);
            *((_DWORD *)a2 + 8) = 2;
            *((_DWORD *)a2 + 9) = *((_DWORD *)v22 + 12);
            v23 = *((_DWORD *)v22 + 13);
            goto LABEL_35;
          }
        }
      }
    }
    else
    {
      if ( v10 <= 3 )
        goto LABEL_8;
      if ( v10 <= 5 )
      {
        SipcPort::DisconnectAllSections(this);
        if ( (*((_DWORD *)this + 107) & 0x20000000) != 0 )
        {
          v25 = *((_QWORD *)this + 58);
          if ( v25 == *((_QWORD *)this + 7) )
            v25 = 0LL;
          v6 = v25;
        }
        *((_QWORD *)a2 + 1) = v6;
        *(_DWORD *)a2 = 3;
        return 0LL;
      }
      if ( v10 == 10 )
      {
        v12 = *v5;
        if ( *v5 < 0 )
          v12 = 0LL;
        if ( v12 == 164 )
        {
          v31 = 0LL;
          v32 = 0;
          v33 = 0LL;
          memset_0(v34, 0, sizeof(v34));
          memset_0(v35, 0, 0x44uLL);
          AlpcMessage::GetMessageData((AlpcMessage *)v5, 0xA4uLL, (char *)&v31);
          Value = SerializedIntegral<unsigned int>::GetValue((char *)&v31 + 6);
          *((_DWORD *)a2 + 2) = *((_DWORD *)this + 24);
          if ( !Value )
            Value = *((_DWORD *)this + 26);
          *((_DWORD *)a2 + 3) = Value;
          *(_DWORD *)a2 = 2;
          return 0LL;
        }
        AlpcPort::RejectClientConnection(this);
      }
      else if ( v10 != 12 )
      {
LABEL_8:
        if ( (v9 & 0x2000) != 0 )
        {
          AlpcMessage::Cancel((AlpcMessage *)v5, *((void **)this + 7));
          v9 = *((_WORD *)this + 46);
        }
        *(_DWORD *)a2 = 1;
        *((_DWORD *)a2 + 2) = v9 & 0xFFFF00FF;
        return 2147549183LL;
      }
    }
  }
  *(_DWORD *)a2 = 0;
  if ( v8 != 258 && v8 != -1073741823 )
  {
    v15 = v8 | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v15, v7);
    return (unsigned int)v15;
  }
  return 1LL;
}
