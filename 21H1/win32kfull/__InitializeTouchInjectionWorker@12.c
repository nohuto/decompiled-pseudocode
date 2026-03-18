/*
 * XREFs of __InitializeTouchInjectionWorker@12 @ 0x149F23
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YGHPAUtagPROCESSINFO@@H@Z @ 0x149349 (-RealizePendingRecreateTouchInjectionDevices@@YGHPAUtagPROCESSINFO@@H@Z.c)
 *     _NtUserInitializeTouchInjection@8 @ 0x16557C (_NtUserInitializeTouchInjection@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CleanupInjectedTouchProcess@4 @ 0x149BA0 (_CleanupInjectedTouchProcess@4.c)
 *     _CreatePseudoDigitizerDevice@12 @ 0x14AF9F (_CreatePseudoDigitizerDevice@12.c)
 */

int __fastcall _InitializeTouchInjectionWorker(int a1, int a2, int a3)
{
  int v3; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  int v12; // edi
  int v13; // eax
  _DWORD *v15; // [esp+10h] [ebp-Ch]
  int PseudoDigitizerDevice; // [esp+24h] [ebp+8h]

  v3 = 0;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000, 0);
  if ( *(_DWORD *)(a3 + 508) )
    CleanupInjectedTouchProcess(a3);
  v5 = (_DWORD *)Win32AllocPoolWithQuotaZInit(88, 1953067861);
  v6 = v5;
  v15 = v5;
  if ( !v5 )
    goto LABEL_16;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice(a1, a2, v5);
  if ( !PseudoDigitizerDevice )
    goto LABEL_16;
  if ( (unsigned __int8)Enforced() && *(int *)(a3 + 8) < 0 )
    v7 = 16;
  else
    v7 = 0;
  v8 = *(_DWORD *)(PseudoDigitizerDevice + 284);
  *(_DWORD *)(v8 + 300) = v7 | *(_DWORD *)(v8 + 300) & 0xFFFFFFEF;
  if ( !*(_DWORD *)(a3 + 508) )
  {
    v9 = (int *)Win32AllocPoolWithQuotaZInit(8, 1953067861);
    if ( !v9 )
    {
LABEL_16:
      UserSetLastError((struct _NT_TIB *)0xE);
      return 0;
    }
    v8 = gpTouchInjectorProcesses;
    v9[1] = a3;
    *v9 = v8;
    gpTouchInjectorProcesses = (int)v9;
  }
  *(_DWORD *)(a3 + 508) = v6;
  HMAssignmentLock(v8, v7);
  v10 = (_DWORD *)(*(_DWORD *)(PseudoDigitizerDevice + 284) + 148);
  *v6 = *v10++;
  v11 = v6 + 1;
  *v11 = *v10++;
  *++v11 = *v10;
  v11[1] = v10[1];
  v12 = a1;
  v15[5] = a2;
  v15[6] = a1;
  v13 = Win32AllocPoolWithQuotaZInit(12 * a1, 1953067861);
  if ( !v13 )
    goto LABEL_16;
  v15[19] = v13;
  if ( a1 )
  {
    do
    {
      v3 += 12;
      *(_DWORD *)(v3 + v15[19] - 4) = 0x40000;
      --v12;
    }
    while ( v12 );
  }
  return 1;
}
