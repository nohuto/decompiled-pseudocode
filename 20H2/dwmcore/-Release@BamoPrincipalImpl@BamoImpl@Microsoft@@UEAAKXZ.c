/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2160
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D27D0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800D2804 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2930 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v1; // rdx
  unsigned int v3; // ebx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this + 2);
  if ( *(int *)(*((_QWORD *)v1 + 4) + 8LL) <= 0 )
  {
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  }
  else
  {
    Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, v1);
    v3 = Microsoft::BamoImpl::BamoImplObject::Release(this);
    Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
  }
  return v3;
}
