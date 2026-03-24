/*
 * XREFs of UsbhInternalValidateBOSDescriptor @ 0x1C005255C
 * Callers:
 *     UsbhValidateBOSDescriptorSet @ 0x1C0052F2C (UsbhValidateBOSDescriptorSet.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 */

char __fastcall UsbhInternalValidateBOSDescriptor(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // r10
  __int64 v5; // r11
  char v6; // r9
  unsigned int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // r8d
  __int64 v10; // r10

  v4 = a2;
  v5 = a1;
  v6 = 1;
  if ( !a2 )
    Log(a1, 256, 1447187249, 0LL, 0LL);
  v7 = *(_DWORD *)(a3 + 16);
  if ( v7 < 5 )
  {
    Log(v5, 256, 1447187250, v7, 0LL);
    v6 = 0;
  }
  if ( v4[1] != 15 )
  {
    Log(v5, 256, 1447187251, v4[1], 0LL);
    v6 = 0;
  }
  if ( *v4 != 5 )
  {
    Log(v5, 256, 1447187252, *v4, 0LL);
    v6 = 0;
  }
  v8 = *((_WORD *)v4 + 1);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3 + v8;
  if ( v8 < 5u )
  {
    Log(v5, 256, 1447187253, 0LL, 0LL);
    v8 = *((_WORD *)v4 + 1);
  }
  v9 = v4[4];
  if ( v8 < (unsigned int)*v4 + 2 * v9 )
  {
    Log(v5, 256, 1447187254, v8, 0LL);
    LOBYTE(v9) = *(_BYTE *)(v10 + 4);
    v6 = 0;
  }
  if ( !(_BYTE)v9 )
    Log(v5, 256, 1447187255, 0LL, 0LL);
  return v6;
}
