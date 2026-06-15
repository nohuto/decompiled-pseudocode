/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x180131F18
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18012FB54 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x180131E84 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x180132268 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

LPVOID __fastcall AERTAllocate(__int64 a1, void *a2, int a3)
{
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  if ( g_bSkipRTHeap )
    return operator new(0xE8uLL);
  v5 = 0LL;
  if ( a2 && (unsigned int)RtlAllocateMemoryBlockLookaside(a2, 232LL, &v5) == -1073741670 )
  {
    AERTAddMemoryToHeap(a2, 0x100000uLL);
    RtlAllocateMemoryBlockLookaside(a2, 232LL, &v5);
  }
  if ( (byte_18019F941 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, (_DWORD)a2, a3, 6, (char)a2, 232, 0, 0);
  return (LPVOID)v5;
}
