/*
 * XREFs of _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B
 * Callers:
 *     _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7 (_RtlpHpSegSegmentAllocate@12.c)
 * Callees:
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 *     _RtlpHpSegMgrVaCtxInsert@8 @ 0x4B37C7EB (_RtlpHpSegMgrVaCtxInsert@8.c)
 */

int __fastcall RtlpHpSegMgrAllocate(int a1, int a2, int a3)
{
  int v5; // esi
  int v6; // edi
  int v8; // [esp-10h] [ebp-2Ch]
  int v9; // [esp-Ch] [ebp-28h]
  unsigned int v10; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  v12 = 0;
  if ( RtlpHpSegMgrReserve(a1, a3, &v12, &v11, &v10) >= 0 )
  {
    v9 = a2;
    v8 = a2;
    v5 = v12;
    if ( RtlpHpSegMgrCommit(a1, v12, 0, v8, v9, 1073745920, a3) >= 0 )
    {
      if ( v11 < v10 )
        RtlpHpSegMgrVaCtxInsert(a1, v5);
      v6 = v5;
      v5 = 0;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v5 = v12;
    v6 = 0;
  }
  if ( v5 )
    RtlpHpSegMgrRelease(0);
  return v6;
}
