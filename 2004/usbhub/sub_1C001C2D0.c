/*
 * XREFs of sub_1C001C2D0 @ 0x1C001C2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001C31C @ 0x1C001C31C (sub_1C001C31C.c)
 *     sub_1C0029E7C @ 0x1C0029E7C (sub_1C0029E7C.c)
 */

__int64 __fastcall sub_1C001C2D0(__int64 a1, IRP *a2)
{
  switch ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x220447u:
    case 0x22044Bu:
      a2->IoStatus.Status = -1073741637;
      IofCompleteRequest(a2, 0);
      return 3221225659LL;
    case 0x220FA3u:
      return sub_1C001C31C();
    case 0x220FA7u:
      sub_1C000F050(a1)[1054] = 2;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    default:
      return sub_1C0029E7C(a1, a2);
  }
}
