/*
 * XREFs of ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180071870
 * Callers:
 *     ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800734C0 (-OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x1800724F0 (-Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 */

Microsoft::BamoImpl::ConnectionIndirector *__fastcall Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)this + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    Microsoft::Bamo::BaseBamoConnection::Free(*(Microsoft::Bamo::BaseBamoConnection **)(v4 + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
