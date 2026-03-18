/*
 * XREFs of _NtUserfnOUTLBOXSTRING@28 @ 0x16CEF6
 * Callers:
 *     <none>
 * Callees:
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnOUTLBOXSTRING(_DWORD *a1, int a2, int a3, volatile void *Address, int a5, char a6, int a7)
{
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  signed int v13; // eax
  int v14; // ecx
  int v16; // [esp+10h] [ebp-2Ch] BYREF
  int v17; // [esp+14h] [ebp-28h]
  volatile void *v18; // [esp+18h] [ebp-24h]
  int v19; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]
  unsigned int v21; // [esp+44h] [ebp+8h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( IsPseudoPwnd(a1) )
    return -1;
  v9 = (a6 + 6) & 0x1F;
  v10 = ((int (__stdcall *)(_DWORD *, int, int, int, int))mpFnidPfn[v9])(a1, 394, a3, a7, a5);
  v8 = -1;
  if ( v10 != -1 )
  {
    v11 = v10 + 1;
    v21 = v10 + 1;
    ms_exc.registration.TryLevel = 0;
    v17 = (a7 << 31) | v17 & 0x7FFFFFFF;
    v12 = v10 + 1;
    if ( !a7 )
      v12 = 2 * v11;
    v13 = v17 & 0x80000000 | v12 & 0x7FFFFFFF;
    v17 = v13;
    if ( (v13 & 0x7FFFFFFFu) >= v21 )
    {
      v16 = 0;
      v18 = Address;
      if ( (v13 & 0x7FFFFFFF) != 0 )
      {
        ProbeForWrite(Address, v13 & 0x7FFFFFFF, 1u);
      }
      else if ( Address )
      {
        ProbeForWrite(Address, (v13 >> 31) + 2, 1u);
      }
      ms_exc.registration.TryLevel = -2;
      v8 = ((int (__stdcall *)(_DWORD *, int, int, int *, int))mpFnidPfn[v9])(a1, a2, a3, &v16, a5);
      v14 = *(_DWORD *)(a1[5] + 20);
      if ( (v14 & 0x40) == 0 && (v14 & 0x30) != 0 )
        return 2 * (a7 != 0) + 2;
    }
    else
    {
      v19 = -1;
      UserSetLastError(0);
      ms_exc.registration.TryLevel = -2;
    }
  }
  return v8;
}
