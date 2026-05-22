/*
 * XREFs of ?IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x1801A29F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180148CE0 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall TextInputStateAdapter::IsProxyInitialized(TextInputStateAdapter *this, bool *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = *((_BYTE *)this + 48);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer((__int64)this, 0LL, "TextInputStateAdapter::IsProxyInitialized", 215LL, 87);
  }
  return v2;
}
