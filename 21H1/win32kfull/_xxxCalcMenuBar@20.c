/*
 * XREFs of _xxxCalcMenuBar@20 @ 0x94A6C
 * Callers:
 *     _NtUserCalcMenuBar@20 @ 0x949A0 (_NtUserCalcMenuBar@20.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _ThreadLockMenuNoModify@8 @ 0xB75EA (_ThreadLockMenuNoModify@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __fastcall xxxCalcMenuBar(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // esi
  int v7; // edi
  int *ThreadWin32Thread; // eax
  int v10; // [esp+18h] [ebp-14h] BYREF
  _DWORD v11[2]; // [esp+1Ch] [ebp-10h] BYREF
  int v12; // [esp+24h] [ebp-8h]
  PKTHREAD CurrentThread; // [esp+28h] [ebp-4h]

  v12 = a2;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v10 = gSmartObjNullRef;
  v11[0] = *(_DWORD *)(v7 + 840);
  *(_DWORD *)(v7 + 840) = v11;
  v11[1] = 0;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0) != 0x40 && *(_DWORD *)(a1 + 92) )
  {
    SmartObjStackRefBase<tagMENU>::operator=(*(_DWORD *)(a1 + 92));
    ThreadLockMenuNoModify();
    xxxMenuBarCompute(a4, v12, a5[2] - *a5 - v12 - a3);
    v6 = *(_DWORD *)(*(_DWORD *)v10 + 40);
    *(_DWORD *)(MEMORY[0x14] + 20) &= ~0x200u;
    ThreadUnlock1();
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v10);
  return v6;
}
