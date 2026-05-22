/*
 * XREFs of ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x1800C1A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcServer::ReleasePrivateReference(SipcServer *this)
{
  SharedObjectBase::ReleasePrivateReference((SipcServer *)((char *)this - 24));
}
