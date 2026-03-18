/*
 * XREFs of _xxxForceWindowToDpiForTest@8 @ 0x15258A
 * Callers:
 *     _NtUserForceWindowToDpiForTest@8 @ 0x16182C (_NtUserForceWindowToDpiForTest@8.c)
 * Callees:
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __fastcall xxxForceWindowToDpiForTest(int a1, int a2)
{
  _DWORD *v3; // ebx
  int result; // eax
  _DWORD *v5; // esi
  unsigned int v6; // eax
  int v7; // eax
  unsigned int *v8; // edi
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // eax
  struct tagRECT *v14; // [esp+8h] [ebp-10h]
  int v15; // [esp+Ch] [ebp-Ch]

  v3 = (_DWORD *)Win32AllocPoolZInit(100, 1886872661);
  result = 0;
  if ( v3 )
  {
    v15 = 1;
    qmemcpy(v3, *(const void **)(a1 + 168), 0x60u);
    *v3 = 1;
    v5 = (_DWORD *)a1;
    v6 = (100 * a2 + 48) / 0x60u;
    v3[1] = v6;
    v3[2] = v6;
    v3[3] = v6;
    v3[4] = v6;
    v14 = (struct tagRECT *)*(unsigned __int16 *)(*(_DWORD *)(a1 + 20) + 180);
    v7 = BuildHwndList(a1, 1, 0);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 16);
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 144) |= 0x4000000u;
      v9 = *(_DWORD *)(v7 + 16);
      if ( v9 != 1 )
      {
        do
        {
          v10 = HMValidateHandleNoSecure(v9, 1);
          v11 = v10;
          if ( v10 )
          {
            *(_WORD *)(*(_DWORD *)(v10 + 20) + 180) = a2;
            v12 = *(_DWORD **)(v10 + 168);
            if ( v12 )
            {
              --*v12;
              if ( !**(_DWORD **)(v11 + 168) )
                Win32FreePool(*(_DWORD *)(v11 + 168));
            }
            *(_DWORD *)(v11 + 168) = v3;
            ++*v3;
          }
          v9 = *++v8;
        }
        while ( *v8 != 1 );
        v5 = (_DWORD *)a1;
      }
    }
    else
    {
      v15 = 0;
    }
    if ( (*v3)-- == 1 )
      Win32FreePool(v3);
    xxxNotifyMonitorChanged(v5, 0, 0, v14);
    return v15;
  }
  return result;
}
