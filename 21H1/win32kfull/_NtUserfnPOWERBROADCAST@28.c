/*
 * XREFs of _NtUserfnPOWERBROADCAST@28 @ 0xA47CC
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserfnPOWERBROADCAST(int a1, int a2, int a3, char *Address, int a5, char a6, int a7)
{
  int v7; // ebx
  char *v8; // esi
  size_t *v9; // eax
  size_t *v10; // ebx
  unsigned int v12; // [esp+0h] [ebp-5Ch]
  unsigned int *v13; // [esp+4h] [ebp-58h]
  size_t v14[5]; // [esp+10h] [ebp-4Ch] BYREF
  _DWORD v15[5]; // [esp+28h] [ebp-34h] BYREF
  size_t *v16; // [esp+3Ch] [ebp-20h]
  SIZE_T Length; // [esp+40h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v7 = 0;
  v16 = 0;
  memset(v15, 0, 12);
  v8 = Address;
  if ( (a3 & 0x8000) == 0 || !Address )
    goto LABEL_6;
  ms_exc.registration.TryLevel = 0;
  Length = 0;
  ProbeForRead(Address, 0x14u, 1u);
  qmemcpy(v14, Address, sizeof(v14));
  if ( (ULongAdd(20, v14[4], (int *)&Length, v12, v13) & 0x80000000) == 0 )
  {
    ProbeForRead(Address, Length, 1u);
    v9 = (size_t *)Win32AllocPoolWithQuota(Length, 1651536725);
    v16 = v9;
    if ( v9 )
    {
      PushW32ThreadLock((int)v9, v15, (int)Win32FreePool);
      v10 = v16;
      qmemcpy(v16, v14, 0x14u);
      memcpy(v10 + 5, Address + 20, v14[4]);
      v8 = (char *)v10;
      ms_exc.registration.TryLevel = -2;
LABEL_6:
      v7 = ((int (__stdcall *)(int, int, int, char *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v8, a5);
      goto LABEL_7;
    }
    UserSetLastError((struct _NT_TIB *)8);
  }
  v15[4] = 0;
  ms_exc.registration.TryLevel = -2;
LABEL_7:
  if ( v16 )
    PopAndFreeAlwaysW32ThreadLock((int)v15);
  return v7;
}
