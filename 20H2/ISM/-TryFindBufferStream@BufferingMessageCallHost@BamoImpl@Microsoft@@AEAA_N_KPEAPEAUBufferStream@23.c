/*
 * XREFs of ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x18003F9D8
 * Callers:
 *     ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18003F230 (-CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z.c)
 *     ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18003F740 (-SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 a2,
        struct Microsoft::BamoImpl::BufferStream **a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax

  v3 = (__int64 *)*((_QWORD *)this + 4);
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( v5[4] >= a2 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || a2 < v4[4] )
LABEL_8:
    v4 = v3;
  if ( v4 == v3 )
  {
    *a3 = 0LL;
    return 0;
  }
  else
  {
    *a3 = (struct Microsoft::BamoImpl::BufferStream *)v4[5];
    return 1;
  }
}
