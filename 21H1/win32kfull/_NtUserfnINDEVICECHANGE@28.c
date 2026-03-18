/*
 * XREFs of _NtUserfnINDEVICECHANGE@28 @ 0xCB608
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserfnINDEVICECHANGE(int a1, int a2, unsigned int a3, SIZE_T *Address, int a5, char a6, int a7)
{
  int v7; // esi
  _DWORD *v8; // ebx
  SIZE_T *v10; // ecx
  SIZE_T v11; // eax
  unsigned int v12; // edi
  char *v13; // ecx
  __int16 v14; // ax
  int *v15; // ecx
  signed int v16; // eax
  char *v17; // ecx
  __int16 v18; // ax
  int *v19; // ecx
  int v20; // eax
  _WORD *v21; // ecx
  _WORD *v22; // edx
  int *v24; // ecx
  char *v25; // ecx
  __int16 v26; // ax
  int *v27; // ecx
  int v28; // [esp-8h] [ebp-50h]
  int *v29; // [esp-4h] [ebp-4Ch]
  unsigned int v30; // [esp+0h] [ebp-48h]
  unsigned int v31; // [esp+0h] [ebp-48h]
  ULONG *v32; // [esp+0h] [ebp-48h]
  unsigned int v33; // [esp+0h] [ebp-48h]
  ULONG *v34; // [esp+0h] [ebp-48h]
  unsigned int v35; // [esp+0h] [ebp-48h]
  ULONG *v36; // [esp+0h] [ebp-48h]
  unsigned int v37; // [esp+0h] [ebp-48h]
  unsigned int v38; // [esp+0h] [ebp-48h]
  ULONG *v39; // [esp+0h] [ebp-48h]
  unsigned int *v40; // [esp+4h] [ebp-44h]
  unsigned int *v41; // [esp+4h] [ebp-44h]
  unsigned int *v42; // [esp+4h] [ebp-44h]
  unsigned int *v43; // [esp+4h] [ebp-44h]
  unsigned int *v44; // [esp+4h] [ebp-44h]
  unsigned int *v45; // [esp+4h] [ebp-44h]
  _DWORD v46[3]; // [esp+10h] [ebp-38h] BYREF
  _DWORD *v47; // [esp+20h] [ebp-28h]
  int v48; // [esp+24h] [ebp-24h]
  int v49; // [esp+28h] [ebp-20h]
  unsigned int v50; // [esp+2Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v7 = 0;
  v8 = 0;
  v47 = 0;
  memset(v46, 0, sizeof(v46));
  if ( (a3 == 0x8000 || a3 == 32772 || a3 > 0x8006 && a3 <= 0x800A) && !Address )
    goto LABEL_33;
  if ( (a3 & 0x8000) == 0 )
    goto LABEL_5;
  if ( !Address )
  {
LABEL_33:
    UserSetLastError((struct _NT_TIB *)0x57);
    return v7;
  }
  ms_exc.registration.TryLevel = 0;
  v50 = 0;
  v10 = Address;
  if ( (unsigned int)Address >= _MmUserProbeAddress )
    v10 = (SIZE_T *)_MmUserProbeAddress;
  v11 = *v10;
  v48 = v11;
  v12 = v11;
  if ( v11 < 0xC )
  {
    v49 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
LABEL_36:
    ms_exc.registration.TryLevel = -2;
    return v7;
  }
  ProbeForRead(Address, v11, 1u);
  if ( (ULongAdd(2, v12, (int *)&v50, v30, v40) & 0x80000000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    v49 = 0;
    goto LABEL_36;
  }
  v8 = (_DWORD *)Win32AllocPoolWithQuota(v50, 1986294613);
  v47 = v8;
  if ( !v8 )
  {
    UserSetLastError((struct _NT_TIB *)8);
    goto LABEL_30;
  }
  PushW32ThreadLock((int)v8, v46, (int)Win32FreePool);
  memcpy(v8, Address, v12);
  *((_WORD *)v8 + (v12 >> 1)) = 0;
  Address = v8;
  if ( *v8 == v12 )
  {
    switch ( v8[1] )
    {
      case 3:
        if ( v12 < 0x10 )
          goto LABEL_30;
        v25 = (char *)(v8 + 3);
        do
        {
          v26 = *(_WORD *)v25;
          v25 += 2;
        }
        while ( v26 );
        if ( (ULongAdd(1, (v25 - ((char *)v8 + 14)) >> 1, (int *)&v50, v31, v41) & 0x80000000) != 0
          || ULongLongToULong(2LL * v50, v39) < 0 )
        {
          goto LABEL_30;
        }
        v29 = v27;
        v28 = 12;
        goto LABEL_24;
      case 5:
        if ( v12 < 0x20 )
          goto LABEL_30;
        v13 = (char *)(v8 + 7);
        do
        {
          v14 = *(_WORD *)v13;
          v13 += 2;
        }
        while ( v14 );
        if ( (ULongAdd(1, (v13 - ((char *)v8 + 30)) >> 1, (int *)&v50, v31, v41) & 0x80000000) != 0
          || ULongLongToULong(2LL * v50, v32) < 0 )
        {
          goto LABEL_30;
        }
        v29 = v15;
        v28 = 28;
        goto LABEL_24;
      case 6:
        if ( v12 < 0x2C )
          goto LABEL_30;
        if ( a3 != 32774 )
          goto LABEL_27;
        v20 = v8[9];
        v48 = v20;
        if ( v20 < 0 )
          goto LABEL_27;
        if ( (ULongAdd(v20, 0x28u, (int *)&v50, v31, v41) & 0x80000000) != 0 )
          goto LABEL_30;
        if ( v50 > v12 )
          goto LABEL_30;
        v21 = (_WORD *)((char *)v8 + v48 + 40);
        if ( v21 < (_WORD *)v8 + 20 )
          goto LABEL_30;
        v22 = v21 + 1;
        while ( *v21++ )
          ;
        if ( (ULongAdd(1, v21 - v22, (int *)&v50, v35, v43) & 0x80000000) != 0
          || ULongLongToULong(2LL * v50, v36) < 0
          || (ULongAdd(40, v50, v24, v37, v44) & 0x80000000) != 0 )
        {
          goto LABEL_30;
        }
        v16 = ULongAdd(v48, v50, (int *)&v50, v38, v45);
        goto LABEL_25;
    }
    if ( v8[1] != 7 )
    {
LABEL_27:
      ms_exc.registration.TryLevel = -2;
LABEL_5:
      v7 = ((int (__stdcall *)(int, int, unsigned int, SIZE_T *, int))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             Address,
             a5);
      goto LABEL_6;
    }
    if ( v12 >= 0x1A0 )
    {
      v17 = (char *)(v8 + 4);
      do
      {
        v18 = *(_WORD *)v17;
        v17 += 2;
      }
      while ( v18 );
      if ( (ULongAdd(1, (v17 - ((char *)v8 + 18)) >> 1, (int *)&v50, v31, v41) & 0x80000000) == 0
        && ULongLongToULong(2LL * v50, v34) >= 0 )
      {
        v29 = v19;
        v28 = 16;
LABEL_24:
        v16 = ULongAdd(v28, v50, v29, v33, v42);
LABEL_25:
        if ( v16 >= 0 && v50 <= v12 )
          goto LABEL_27;
      }
    }
  }
LABEL_30:
  v49 = 0;
  ms_exc.registration.TryLevel = -2;
LABEL_6:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((int)v46);
  return v7;
}
