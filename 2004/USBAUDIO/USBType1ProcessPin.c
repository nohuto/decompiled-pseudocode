/*
 * XREFs of USBType1ProcessPin @ 0x1C00060F0
 * Callers:
 *     <none>
 * Callees:
 *     USBType1ProcessStreamPointer @ 0x1C0005F68 (USBType1ProcessStreamPointer.c)
 *     USBType1HandleUrbError @ 0x1C00321C4 (USBType1HandleUrbError.c)
 */

__int64 __fastcall USBType1ProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rax
  int v2; // ebx
  __int64 v4; // rsi
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rax
  struct _KSSTREAM_POINTER *v7; // rdi
  struct _KSSTREAM_POINTER *v8; // rcx
  NTSTATUS v9; // edx

  Context = Pin->Context;
  v2 = 0;
  v4 = Context[19];
  if ( *((_BYTE *)Context + 46) )
    return 3221226166LL;
  if ( !*(_BYTE *)(v4 + 100) )
    return 259LL;
  if ( !*(_BYTE *)v4 || (v2 = USBType1HandleUrbError(), v2 >= 0) )
  {
    LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
    v7 = LeadingEdgeStreamPointer;
    if ( LeadingEdgeStreamPointer )
    {
      if ( LeadingEdgeStreamPointer->OffsetIn.Count / (*(_DWORD *)(v4 + 8) * *(_DWORD *)(v4 + 116)) <= 0x100 )
      {
        v8 = LeadingEdgeStreamPointer;
        if ( (LeadingEdgeStreamPointer->StreamHeader->OptionsFlags & 8) != 0 )
        {
          v2 = -1073741762;
          v9 = -1073741762;
        }
        else
        {
          if ( LeadingEdgeStreamPointer->OffsetIn.Count )
            return (unsigned int)USBType1ProcessStreamPointer(LeadingEdgeStreamPointer);
          v2 = 0;
          v9 = 0;
        }
      }
      else
      {
        v2 = -1073741764;
        v8 = LeadingEdgeStreamPointer;
        v9 = -1073741764;
      }
      KsStreamPointerSetStatusCode(v8, v9);
      KsStreamPointerUnlock(v7, 1u);
    }
  }
  return (unsigned int)v2;
}
