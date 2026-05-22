/*
 * XREFs of ?CopyConfig@InputConfigContextProvider@@IEAAJAEBUINPUT_SPACE_PAYLOAD@@PEAU2@@Z @ 0x180035E60
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035A5C (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18003D2A4 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 */

__int64 __fastcall InputConfigContextProvider::CopyConfig(
        InputConfigContextProvider *this,
        const struct INPUT_SPACE_PAYLOAD *a2,
        struct INPUT_SPACE_PAYLOAD *a3)
{
  void *v5; // rax

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_QWORD *)a3 + 2) = *((_QWORD *)a2 + 2);
  if ( !*((_DWORD *)a3 + 3) )
    return 0LL;
  v5 = operator new[](saturated_mul(*((unsigned int *)a3 + 3), 0xC8uLL));
  *((_QWORD *)a3 + 2) = v5;
  if ( v5 )
  {
    memcpy_0(v5, *((const void **)a2 + 2), 200LL * *((unsigned int *)a3 + 3));
    return 0LL;
  }
  return 2147942414LL;
}
