/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180026380
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180027F40 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, this[2]);
  v2 = Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)this);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
  if ( !v2 )
  {
    v4 = (*((__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector **))*this + 7))(this);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
  }
  return v2;
}
