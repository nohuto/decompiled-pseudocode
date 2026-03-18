/*
 * XREFs of _ValidatePointerOffset@24 @ 0x17BD8C
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __stdcall ValidatePointerOffset(int a1, int a2, _DWORD *a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // ebx
  int v17; // edi

  v6 = a4;
  v7 = a3;
  *a6 = a4;
  v8 = a5;
  a6[1] = a5;
  if ( a4 || a5 )
  {
    v9 = HMValidateHandleNoSecure(a3[6], 19);
    if ( v9 )
    {
      v10 = *(_DWORD **)(v9 + 284);
      v11 = a5 + a2;
      v12 = a4 + a1;
      v13 = a5 + a2;
      if ( a4 + a1 >= v10[37] )
      {
        v14 = v10[39];
        if ( v12 >= v14 )
          v12 = v14 - 1;
      }
      else
      {
        v12 = v10[37];
      }
      if ( v11 >= v10[38] )
      {
        v15 = v10[40];
        if ( v11 >= v15 )
          v13 = v15 - 1;
      }
      else
      {
        v13 = v10[38];
      }
      v6 = v12 - a1;
      v8 = v13 - a2;
      v7 = a3;
    }
    *a6 = v6;
    v16 = a6;
    a6[1] = v8;
    v17 = 1;
  }
  else
  {
    v16 = a6;
    v17 = 0;
  }
  if ( TouchTargetingEnabledForInput(v7[8], v7[9], v7 + 2) )
  {
    EtwTraceTouchTargetingOffset(*v16, v16[1], v7[3], *(unsigned __int16 *)v7);
    EtwTraceTouchTargetingPointerEvent(
      v7[3],
      *(unsigned __int16 *)v7,
      v7[2],
      v7[5],
      v7[25],
      v7[8],
      v7[9],
      v7[26],
      v7[28],
      v7[27],
      v7[29],
      v7[34]);
  }
  return v17;
}
