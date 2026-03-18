/*
 * XREFs of _NtUserfnINPGESTURENOTIFYSTRUCT@28 @ 0x16C9A6
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINPGESTURENOTIFYSTRUCT(_DWORD *a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int v7; // ebx
  int v8; // ecx
  const void *v9; // esi
  int v10; // eax
  int v12; // [esp-4h] [ebp-58h]
  _BYTE v13[20]; // [esp+10h] [ebp-44h] BYREF
  _DWORD v14[5]; // [esp+24h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  memset(v13, 0, sizeof(v13));
  if ( a2 == 284 && a6 != 670 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  v7 = 0;
  ms_exc.registration.TryLevel = 0;
  v9 = (const void *)a4;
  if ( a4 + 20 < a4 || a4 + 20 > _MmUserProbeAddress )
    v9 = (const void *)_MmUserProbeAddress;
  qmemcpy(v14, v9, sizeof(v14));
  qmemcpy(v13, v14, sizeof(v13));
  ms_exc.registration.TryLevel = -2;
  if ( v14[0] != 20 || !v14[4] )
  {
    v12 = 87;
    goto LABEL_5;
  }
  if ( a2 == 284 )
  {
    v10 = a1 ? *a1 : 0;
    if ( v14[2] != v10 )
    {
LABEL_4:
      v12 = 5;
LABEL_5:
      v8 = v12;
      goto LABEL_6;
    }
  }
  if ( !v14[1] )
    return ((int (__stdcall *)(_DWORD *, int, int, _BYTE *, int))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(a1, a2, a3, v13, a5);
  v8 = 1004;
LABEL_6:
  UserSetLastError((struct _NT_TIB *)v8);
  return v7;
}
