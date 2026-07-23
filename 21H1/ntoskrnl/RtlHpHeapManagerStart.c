/*
 * XREFs of RtlHpHeapManagerStart @ 0x14039A268
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039A0A4 (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x1403C0058 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpMetadataHeapStart @ 0x14035FB34 (RtlpHpMetadataHeapStart.c)
 *     RtlpHpMetadataHeapCreate @ 0x1403781A0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039A338 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x14039A430 (RtlCSparseBitmapStart.c)
 */

NTSTATUS __fastcall RtlHpHeapManagerStart(
        _RTL_RUN_ONCE *a1,
        unsigned int a2,
        _RTL_RUN_ONCE a3,
        unsigned __int64 a4,
        char a5)
{
  NTSTATUS result; // eax
  unsigned int v10; // edi
  char v11; // bl
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF

  a1[1].Ptr = a3.Ptr;
  result = RtlCSparseBitmapStart(&a1[2], 2 * (a4 >> 20), a2, a2 == 1);
  if ( result >= 0 )
  {
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlpHpVaMgrCtxStart)(
               &a1[11],
               a2,
               (_RTL_RUN_ONCE)a3.Value,
               a4 - 1);
    if ( result >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v12 = 0LL;
        *(_WORD *)((char *)&v12 + 1) = 1;
        LOBYTE(v12) = (2 * (a2 & 3)) | 1;
        RtlpHpMetadataHeapCreate(a1 + 1814, &v12, 0LL);
      }
      if ( (a5 & 1) != 0 )
      {
        v10 = 0;
        v11 = 2 * (a2 & 3);
        while ( 1 )
        {
          v12 = 0LL;
          *(_WORD *)((char *)&v12 + 1) = (unsigned __int8)v10;
          LOBYTE(v12) = v11 | (v10 != 0);
          result = RtlpHpMetadataHeapStart(&a1[2 * v10 + 1811], &v12);
          if ( result < 0 )
            break;
          if ( ++v10 >= 3 )
            return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
