/*
 * XREFs of _NtUserThunkedMenuInfo@8 @ 0xC1340
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserThunkedMenuInfo(int a1, ULONG a2)
{
  int v2; // ebx
  const void *v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v10[7]; // [esp+10h] [ebp-54h] BYREF
  int v11; // [esp+2Ch] [ebp-38h] BYREF
  int v12; // [esp+30h] [ebp-34h]
  int v13; // [esp+34h] [ebp-30h]
  _DWORD *v14[2]; // [esp+38h] [ebp-2Ch] BYREF
  int v15; // [esp+40h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  memset(v10, 0, sizeof(v10));
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v2 = 0;
  EnterCrit(0, 1);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v14);
  ms_exc.registration.TryLevel = 0;
  v3 = (const void *)_MmUserProbeAddress;
  if ( a2 < _MmUserProbeAddress )
    v3 = (const void *)a2;
  qmemcpy(v10, v3, sizeof(v10));
  ms_exc.registration.TryLevel = -2;
  v4 = ValidateHmenu(a1);
  v15 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v14, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==(v14, v5) && (*(_BYTE *)(*(_DWORD *)(*v14[0] + 20) + 20) & 0x40) == 0 )
  {
    v6 = v15;
    if ( !v15 )
      v6 = *v14[0];
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v11 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v11;
    v12 = v6;
    if ( v6 )
      HMLockObject(v6);
    v2 = xxxSetMenuInfo(v14, v10);
    ThreadUnlock1();
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v14);
  UserSessionSwitchLeaveCrit();
  return v2;
}
