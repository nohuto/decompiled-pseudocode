/*
 * XREFs of ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180027F80
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180028410 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180029000 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputProcessorWorker(_QWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  char *v9; // rbx
  unsigned int (__fastcall *v10)(_QWORD); // rax

  v4 = a4;
  result = 2147943568LL;
  if ( a4 < 0x13 )
  {
    v9 = (char *)&unk_180205010 + 48 * (int)a4;
    do
    {
      if ( IsEdition(*((_QWORD *)v9 + 1)) && (!a3 || a3 == *(_DWORD *)v9) )
      {
        v10 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)v9 + 2);
        if ( !v10 || v10(*a1) )
        {
          result = (*((__int64 (__fastcall **)(_QWORD *, __int64))v9 + 3))(a1, a2);
          if ( (int)result >= 0 )
            break;
        }
      }
      ++v4;
      v9 += 48;
      result = 2147943568LL;
    }
    while ( v4 < 0x13 );
  }
  return result;
}
