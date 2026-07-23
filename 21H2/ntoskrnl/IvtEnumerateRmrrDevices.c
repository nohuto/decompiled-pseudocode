/*
 * XREFs of IvtEnumerateRmrrDevices @ 0x1404E8070
 * Callers:
 *     <none>
 * Callees:
 *     HalpIvtCreateReservedDevice @ 0x1404E7F20 (HalpIvtCreateReservedDevice.c)
 */

__int64 __fastcall IvtEnumerateRmrrDevices(_QWORD *ReservedDevice, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  _QWORD *v6; // r15
  unsigned int v7; // ebx
  _QWORD **v8; // rsi
  unsigned int v9; // ebp
  _QWORD *v10; // rdi
  __int64 result; // rax

  v3 = (_DWORD *)ReservedDevice[36];
  v6 = ReservedDevice;
  if ( *a2 >= *v3 )
  {
    v7 = 0;
    v8 = (_QWORD **)(v3 + 2);
    v9 = 0;
    v10 = *v8;
    while ( v10 != v8 )
    {
      ReservedDevice = HalpIvtCreateReservedDevice(ReservedDevice, (__int64)v10);
      *(_QWORD *)(a3 + 8LL * v9) = ReservedDevice;
      if ( !ReservedDevice )
      {
        v7 = -1073741670;
        break;
      }
      v10 = (_QWORD *)*v10;
      ++v9;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  result = v7;
  *a2 = *(_DWORD *)v6[36];
  return result;
}
