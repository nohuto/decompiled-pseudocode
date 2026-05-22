/*
 * XREFs of ?SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z @ 0x1801A3CD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180148D70 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall TextInputStateAdapter::SetInterestedProperty(TextInputStateAdapter *this, __int64 a2, char a3)
{
  unsigned int v3; // ebx

  if ( (unsigned __int16)a2 < 0x25u )
  {
    v3 = 0;
    *((_BYTE *)this + (unsigned __int16)a2 + 49) = a3;
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer((__int64)this, a2, "TextInputStateAdapter::SetInterestedProperty", 185LL, 87);
  }
  return v3;
}
