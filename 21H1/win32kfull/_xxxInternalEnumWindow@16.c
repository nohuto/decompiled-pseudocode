/*
 * XREFs of _xxxInternalEnumWindow@16 @ 0x141598
 * Callers:
 *     _xxxTurnOffCompositing@8 @ 0x153D74 (_xxxTurnOffCompositing@8.c)
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall xxxInternalEnumWindow(int a1, int (__stdcall *a2)(int, int), int a3, int a4)
{
  int result; // eax
  struct tagBWL *v5; // edi
  unsigned int *v6; // esi
  unsigned int v7; // eax
  int v8; // ebx
  int (__stdcall *v9)(int, int); // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  struct tagBWL *v15; // [esp+18h] [ebp-8h]
  int (__stdcall *v16)(int, int); // [esp+1Ch] [ebp-4h]
  int v17; // [esp+2Ch] [ebp+Ch]

  v16 = a2;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  result = BuildHwndList(a1, a4, 0);
  v5 = (struct tagBWL *)result;
  v15 = (struct tagBWL *)result;
  if ( result )
  {
    v6 = (unsigned int *)(result + 16);
    v7 = *(_DWORD *)(result + 16);
    v8 = 1;
    if ( v7 != 1 )
    {
      v9 = v16;
      do
      {
        v17 = HMValidateHandleNoSecure(v7, 1);
        if ( v17 )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v12 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v12;
          v13 = v17;
          HMLockObject(v17);
          v8 = v9(v17, a3);
          ThreadUnlock1();
          if ( !v8 )
            break;
        }
        v7 = *++v6;
      }
      while ( *v6 != 1 );
      v5 = v15;
    }
    FreeHwndList(v5);
    return v8;
  }
  return result;
}
