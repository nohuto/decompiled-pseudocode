/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C005F080
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C005F348 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00A2D8C (xxxInsertMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(__int64 a1, int a2, int a3, int a4, ULONG64 a5, PCWSTR SourceString)
{
  _OWORD *v10; // rcx
  PCWSTR v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdi
  __int64 ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD v29[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-98h]
  int v31; // [rsp+48h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-88h] BYREF
  __int128 v33; // [rsp+60h] [rbp-78h] BYREF
  __int64 v34; // [rsp+70h] [rbp-68h]
  _OWORD v35[5]; // [rsp+80h] [rbp-58h] BYREF

  memset(v35, 0, sizeof(v35));
  DestinationString = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v29);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v35[0] = *v10;
  v35[1] = v10[1];
  v35[2] = v10[2];
  v35[3] = v10[3];
  v35[4] = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v11 = (PCWSTR)MmUserProbeAddress;
  v13 = *(unsigned int *)v11;
  v31 = v13;
  *(_DWORD *)&DestinationString.Length = v13;
  v14 = (WCHAR *)*((_QWORD *)v11 + 1);
  DestinationString.Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v31) )
    goto LABEL_12;
  if ( (v13 & 1) != 0 )
    goto LABEL_13;
  if ( v15 <= (unsigned __int64)v14 )
  {
LABEL_12:
    if ( (v13 & 1) == 0 )
    {
LABEL_14:
      **v16 = 0;
      goto LABEL_16;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v14);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  if ( (BYTE4(v35[0]) & 1) == 0 || (HIDWORD(v35[0]) & 0xFFFFEF74) == 0 )
  {
    ValidateHmenu(a1);
    v30 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v29);
    v17 = SmartObjStackRef<tagMENU>::operator==(v29);
    if ( a4 )
    {
      if ( v17 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v18 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v17 )
        goto LABEL_18;
      v18 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 40LL) & 0x40) == 0;
    }
    if ( v18 )
    {
      v19 = v30;
      if ( !v30 )
        v19 = *(_QWORD *)v29[0];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v33 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
      *((_QWORD *)&v33 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      if ( a4 )
        inserted = xxxInsertMenuItem((unsigned int)v29, a2, a3, (unsigned int)v35, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v29, a2, a3, (unsigned int)v35, (__int64)&DestinationString);
      v12 = inserted;
      ThreadUnlock1(v23, v22, v24);
    }
  }
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v29);
  UserSessionSwitchLeaveCrit(v26, v25, v27);
  return v12;
}
