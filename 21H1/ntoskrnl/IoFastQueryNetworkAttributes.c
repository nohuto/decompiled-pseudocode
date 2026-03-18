/*
 * XREFs of IoFastQueryNetworkAttributes @ 0x14088F7A0
 * Callers:
 *     <none>
 * Callees:
 *     IopFastQueryNetworkAttributes @ 0x14088FD68 (IopFastQueryNetworkAttributes.c)
 */

BOOLEAN __stdcall IoFastQueryNetworkAttributes(
        POBJECT_ATTRIBUTES ObjectAttributes,
        ACCESS_MASK DesiredAccess,
        ULONG OpenOptions,
        PIO_STATUS_BLOCK IoStatus,
        PFILE_NETWORK_OPEN_INFORMATION Buffer)
{
  ULONG v5; // r10d

  v5 = OpenOptions;
  LOBYTE(OpenOptions) = KeGetCurrentThread()->PreviousMode;
  return IopFastQueryNetworkAttributes(ObjectAttributes, DesiredAccess, OpenOptions, v5, IoStatus, Buffer);
}
