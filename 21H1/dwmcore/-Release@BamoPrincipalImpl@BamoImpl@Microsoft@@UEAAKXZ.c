/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800B1A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800B1A20 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800B2030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800B2064 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  unsigned int v9; // ebx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this + 2);
  if ( *(int *)(*((_QWORD *)v4 + 4) + 8LL) <= 0 )
  {
    return (unsigned int)Microsoft::BamoImpl::BamoImplObject::Release(this, (__int64)v4, a3, a4);
  }
  else
  {
    Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, v4);
    v9 = Microsoft::BamoImpl::BamoImplObject::Release(this, v6, v7, v8);
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v11);
  }
  return v9;
}
