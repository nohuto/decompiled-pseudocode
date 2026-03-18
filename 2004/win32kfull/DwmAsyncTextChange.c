/*
 * XREFs of DwmAsyncTextChange @ 0x1C002A50C
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     DefSetText @ 0x1C00ADA20 (DefSetText.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncTextChange(PVOID Object, __int64 a2)
{
  unsigned int v3; // edi
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-28h]

  v3 = -1073741823;
  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    WORD2(v5[0]) = 0x8000;
    v6[0] = 0LL;
    LODWORD(v5[0]) = 3407884;
    LODWORD(v6[1]) = 1073741833;
    *(_QWORD *)((char *)&v6[1] + 4) = a2;
    EtwUpdateEvent(a2);
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
