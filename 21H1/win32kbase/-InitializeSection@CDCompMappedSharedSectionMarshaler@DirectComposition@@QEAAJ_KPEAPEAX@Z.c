/*
 * XREFs of ?InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0036464
 * Callers:
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C00363BC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(
        DirectComposition::CDCompMappedSharedSectionMarshaler *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rax
  PVOID v7; // rbx
  NTSTATUS v8; // edi
  NTSTATUS v9; // eax
  void *v11; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)this;
  Handle = 0LL;
  v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(DirectComposition::CDCompMappedSharedSectionMarshaler *, __int64, HANDLE *))(v3 + 232))(
         this,
         a2,
         &Handle);
  if ( v8 >= 0 )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
    v7 = Object;
    v8 = v9;
  }
  v11 = 0LL;
  if ( v8 < 0 || (v8 = ObOpenObjectByPointer(v7, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &v11), v8 < 0) )
  {
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  else
  {
    *a3 = v11;
    *((_QWORD *)this + 8) = a2;
    *((_QWORD *)this + 7) = v7;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v8;
}
