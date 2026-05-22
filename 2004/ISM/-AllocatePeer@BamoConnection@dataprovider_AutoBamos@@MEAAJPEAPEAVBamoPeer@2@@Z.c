/*
 * XREFs of ?AllocatePeer@BamoConnection@dataprovider_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x180039BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall dataprovider_AutoBamos::BamoConnection::AllocatePeer(
        dataprovider_AutoBamos::BamoConnection *this,
        struct dataprovider_AutoBamos::BamoPeer **a2)
{
  _DWORD *v4; // [rsp+38h] [rbp+10h]

  v4 = operator new(0x48uLL);
  *(_QWORD *)v4 = &ISMBamos_AutoBamos::BamoPeer::`vftable';
  v4[4] = 1;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  v4[12] = 0;
  *((_WORD *)v4 + 26) = 0;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vftable';
  *((_QWORD *)v4 + 3) = v4;
  *a2 = (struct dataprovider_AutoBamos::BamoPeer *)v4;
  return 0LL;
}
