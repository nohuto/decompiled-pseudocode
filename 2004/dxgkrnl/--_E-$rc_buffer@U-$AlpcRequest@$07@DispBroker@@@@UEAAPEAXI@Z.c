/*
 * XREFs of ??_E?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z @ 0x1C0039E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0008D00 (--1ReferenceCounted@@UEAA@XZ.c)
 */

ReferenceCounted *__fastcall rc_buffer<DispBroker::AlpcRequest<8>>::`vector deleting destructor'(
        ReferenceCounted *P,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  ReferenceCounted::~ReferenceCounted(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
