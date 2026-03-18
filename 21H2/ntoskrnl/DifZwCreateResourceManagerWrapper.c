/*
 * XREFs of DifZwCreateResourceManagerWrapper @ 0x14061ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateResourceManager @ 0x14041CFA0 (ZwCreateResourceManager.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwCreateResourceManagerWrapper(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  _QWORD v22[10]; // [rsp+48h] [rbp-31h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+47h]

  memset(v22, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(511);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (VfRuleClasses & 0x200000000LL) != 0)
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) == 0 )
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v12, v11, v14, v15);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  v22[0] = ReturnAddressForWrappers;
LABEL_13:
  v22[3] = ObjectAttributes;
  LODWORD(v22[2]) = CreateOptions;
  v22[1] = Description;
  v22[7] = ResourceManagerHandle;
  LODWORD(v22[6]) = DesiredAccess;
  v22[5] = TmHandle;
  v22[4] = ResourceManagerGuid;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v22);
  }
LABEL_18:
  result = ZwCreateResourceManager(
             ResourceManagerHandle,
             DesiredAccess,
             TmHandle,
             ResourceManagerGuid,
             ObjectAttributes,
             CreateOptions,
             Description);
  LODWORD(v22[8]) = result;
  if ( APIThunkContextById )
  {
    v20 = (_QWORD **)(APIThunkContextById + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v21 - 1))(v22);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return v22[8];
    }
  }
  return result;
}
