/*
 * XREFs of ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C009B00C
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C009B068 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C009D910 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C009D068 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ReleaseSystemResource(
        DirectComposition::CApplicationChannel *a1,
        int a2)
{
  unsigned __int64 v3; // rcx
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 result; // rax

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)a1 + 17) )
    v4 = *(struct DirectComposition::CResourceMarshaler **)(v3 * *((_QWORD *)a1 + 18) + *((_QWORD *)a1 + 14));
  else
    v4 = 0LL;
  result = DirectComposition::CApplicationChannel::ReleaseResource(a1, v4);
  if ( !(_DWORD)result )
    return DirectComposition::CApplicationChannel::Commit(a1, 0LL, 0, 0LL);
  return result;
}
