/*
 * XREFs of __87except @ 0x4B2FEB82
 * Callers:
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 *     sub_4B2FD1F5 @ 0x4B2FD1F5 (sub_4B2FD1F5.c)
 * Callees:
 *     _RtlGetReturnAddressHijackTarget@0 @ 0x4B2B0650 (_RtlGetReturnAddressHijackTarget@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __handle_exc @ 0x4B2FD8A9 (__handle_exc.c)
 *     __raise_exc @ 0x4B2FDAE6 (__raise_exc.c)
 *     __set_errno_from_matherr @ 0x4B2FDD8F (__set_errno_from_matherr.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 */

int *__usercall _87except@<eax>(int a1@<ebp>, int a2, int a3, __int16 *a4)
{
  __int16 v4; // cx
  int v5; // edi
  int *result; // eax
  ULONG_PTR v7; // [esp-A8h] [ebp-B4h]
  unsigned int v8; // [esp-94h] [ebp-A0h]
  int v9; // [esp-84h] [ebp-90h] BYREF
  double v10[8]; // [esp-80h] [ebp-8Ch] BYREF
  unsigned int v11; // [esp-40h] [ebp-4Ch]
  int v12; // [esp+0h] [ebp-Ch]
  void *v13; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v12 = a1;
  v13 = retaddr;
  v4 = *a4;
  v9 = (unsigned __int16)*a4;
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      goto LABEL_13;
    case 2:
      v8 = 4;
      goto LABEL_14;
    case 3:
      v8 = 17;
      goto LABEL_14;
    case 4:
      v8 = 18;
      goto LABEL_14;
    case 5:
LABEL_13:
      v8 = 8;
LABEL_14:
      v5 = v8;
      if ( !_handle_exc(v8, (double *)(a3 + 24), v4) )
      {
        if ( a2 == 16 || a2 == 22 || a2 == 29 )
        {
          v10[6] = *(double *)(a3 + 16);
          v11 = v11 & 0xFFFFFFE0 | 3;
        }
        else
        {
          v11 &= ~1u;
        }
        HIDWORD(v7) = &v9;
        LODWORD(v7) = v10;
        _raise_exc(v7, v5, a2, a3 + 8, a3 + 24);
      }
      break;
    case 7:
      *(_DWORD *)a3 = 1;
      break;
    case 8:
      v8 = 16;
      goto LABEL_14;
  }
  _ctrlfp();
  if ( *(_DWORD *)a3 == 8 )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  if ( _matherr_flag )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  result = (int *)RtlGetReturnAddressHijackTarget();
  if ( !result )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  return result;
}
