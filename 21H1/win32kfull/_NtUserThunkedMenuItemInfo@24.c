/*
 * XREFs of _NtUserThunkedMenuItemInfo@24 @ 0x1D426
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetMenuItemInfo@20 @ 0x1DCEA (_xxxSetMenuItemInfo@20.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserThunkedMenuItemInfo(int a1, int a2, int a3, int a4, ULONG a5, ULONG a6)
{
  int v6; // ebx
  const void *v7; // esi
  struct _UNICODE_STRING *v8; // ecx
  WCHAR *v9; // esi
  int v10; // eax
  int v11; // ecx
  char v12; // al
  bool v13; // zf
  int v14; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int inserted; // eax
  _DWORD v19[12]; // [esp+10h] [ebp-6Ch] BYREF
  int v20; // [esp+40h] [ebp-3Ch] BYREF
  int v21; // [esp+44h] [ebp-38h]
  int v22; // [esp+48h] [ebp-34h]
  _DWORD v23[2]; // [esp+4Ch] [ebp-30h] BYREF
  int v24; // [esp+54h] [ebp-28h]
  struct _UNICODE_STRING DestinationString; // [esp+58h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v6 = 0;
  memset(v19, 0, sizeof(v19));
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  EnterCrit(0, 1);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23);
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)_MmUserProbeAddress;
  if ( a5 < _MmUserProbeAddress )
    v7 = (const void *)a5;
  qmemcpy(v19, v7, sizeof(v19));
  v8 = (struct _UNICODE_STRING *)a6;
  if ( a6 )
  {
    if ( a6 >= _MmUserProbeAddress )
      v8 = (struct _UNICODE_STRING *)_MmUserProbeAddress;
    DestinationString = *v8;
    v9 = (PWSTR)((char *)DestinationString.Buffer + DestinationString.Length + 2);
    if ( v9 <= DestinationString.Buffer || (unsigned int)v9 >= _MmUserProbeAddress )
LABEL_12:
      ExRaiseAccessViolation();
    if ( DestinationString.Length > DestinationString.MaximumLength || (DestinationString.Length & 1) != 0 )
    {
      if ( (DestinationString.Length & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      goto LABEL_12;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0);
  }
  ms_exc.registration.TryLevel = -2;
  if ( (v19[1] & 1) == 0 || (v19[3] & 0xFFFFEF74) == 0 )
  {
    v10 = ValidateHmenu(a1);
    v24 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v10);
    v12 = SmartObjStackRef<tagMENU>::operator==(v11);
    if ( a4 )
    {
      if ( v12 || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v23[0] + 20) + 20) & 0x40) != 0 )
        goto LABEL_16;
      v13 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v23[0] + 20) + 20) & 0x200) == 0;
    }
    else
    {
      if ( v12 )
        goto LABEL_16;
      v13 = (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v23[0] + 20) + 20) & 0x40) == 0;
    }
    if ( v13 )
    {
      v14 = v24;
      if ( !v24 )
        v14 = *(_DWORD *)v23[0];
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v20 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v20;
      v21 = v14;
      if ( v14 )
        HMLockObject(v14);
      if ( a4 )
        inserted = xxxInsertMenuItem(a3, v19, &DestinationString);
      else
        inserted = xxxSetMenuItemInfo(a3, v19, &DestinationString);
      v6 = inserted;
      ThreadUnlock1();
    }
  }
LABEL_16:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v23);
  UserSessionSwitchLeaveCrit();
  return v6;
}
