/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0035870
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C0033E40 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C0035B38 (xxxInsertMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C015AF40 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        PCWSTR SourceString)
{
  __int64 v10; // r9
  _OWORD *v11; // rcx
  PCWSTR v12; // rdx
  int v13; // ebx
  __int64 v14; // rcx
  WCHAR *v15; // rdx
  ULONG64 v16; // r8
  _BYTE **v17; // rax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rdi
  __int64 ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD *v28[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-98h]
  int v30; // [rsp+48h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-88h] BYREF
  __int128 v32; // [rsp+60h] [rbp-78h] BYREF
  __int64 v33; // [rsp+70h] [rbp-68h]
  _OWORD v34[5]; // [rsp+80h] [rbp-58h] BYREF

  memset(v34, 0, sizeof(v34));
  DestinationString = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v28);
  v11 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v34[0] = *v11;
  v34[1] = v11[1];
  v34[2] = v11[2];
  v34[3] = v11[3];
  v34[4] = v11[4];
  v12 = SourceString;
  v13 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v12 = (PCWSTR)MmUserProbeAddress;
  v14 = *(unsigned int *)v12;
  v30 = v14;
  *(_DWORD *)&DestinationString.Length = v14;
  v15 = (WCHAR *)*((_QWORD *)v12 + 1);
  DestinationString.Buffer = v15;
  if ( ((unsigned __int8)v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v30) )
    goto LABEL_12;
  if ( (v14 & 1) != 0 )
    goto LABEL_13;
  if ( v16 <= (unsigned __int64)v15 )
  {
LABEL_12:
    if ( (v14 & 1) == 0 )
    {
LABEL_14:
      **v17 = 0;
      goto LABEL_16;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v15, v16, v10);
    v17 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  if ( (BYTE4(v34[0]) & 1) == 0 || (HIDWORD(v34[0]) & 0xFFFFEF74) == 0 )
  {
    ValidateHmenu(a1);
    v29 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v28);
    v18 = SmartObjStackRef<tagMENU>::operator==(v28);
    if ( a4 )
    {
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*v28[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v19 = (*(_DWORD *)(*(_QWORD *)(*v28[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v18 )
        goto LABEL_18;
      v19 = (*(_DWORD *)(*(_QWORD *)(*v28[0] + 40LL) + 40LL) & 0x40) == 0;
    }
    if ( v19 )
    {
      v20 = v29;
      if ( !v29 )
        v20 = *v28[0];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v32;
      *((_QWORD *)&v32 + 1) = v20;
      if ( v20 )
        HMLockObject(v20);
      if ( a4 )
        inserted = xxxInsertMenuItem((unsigned int)v28, a2, a3, (unsigned int)v34, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo(v28, a2, a3, (__int64)v34, (__int64)&DestinationString);
      v13 = inserted;
      ThreadUnlock1(v24, v23, v25);
    }
  }
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v28);
  UserSessionSwitchLeaveCrit(v26);
  return v13;
}
