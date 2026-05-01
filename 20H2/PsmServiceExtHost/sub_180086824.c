/*
 * XREFs of sub_180086824 @ 0x180086824
 * Callers:
 *     sub_1800867B4 @ 0x1800867B4 (sub_1800867B4.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180086A68 @ 0x180086A68 (sub_180086A68.c)
 *     sub_180086D30 @ 0x180086D30 (sub_180086D30.c)
 */

__int64 __fastcall sub_180086824(void *Src, unsigned int a2, DWORD a3)
{
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v9; // rcx
  union _LARGE_INTEGER *v10; // rsi
  ULONG v11; // ecx
  __int64 v12; // rax
  HANDLE Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v15[176]; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER v16[176]; // [rsp+5C0h] [rbp+4C0h] BYREF

  v4 = a2;
  memset(v16, 0, 0x578uLL);
  memset(v15, 0, 0x578uLL);
  if ( !(_DWORD)v4 && !a3 )
  {
    v6 = -1073741811;
    goto LABEL_23;
  }
  v7 = 16LL;
  if ( (unsigned int)v4 > 0x10 )
  {
    v6 = -1073740757;
    goto LABEL_23;
  }
  memset(v16, 0, 0x578uLL);
  v16[0].LowPart = 91751760;
  v16[5].LowPart = 0x10000000;
  memcpy(&v16[6], Src, 4 * v4);
  v16[41].QuadPart = 0LL;
  v16[14].LowPart = a3;
  v16[172].LowPart = 229500;
  v16[172].HighPart = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  sub_180086A68((unsigned int)&v16[15], (unsigned int)&v16[31], (unsigned int)&v16[33], v8, (__int64)&v16[6]);
  v6 = sub_180086D30(v9, v16, v15);
  v10 = &v16[15];
  do
  {
    if ( v10->QuadPart )
      PssNtFreeSnapshot();
    ++v10;
    --v7;
  }
  while ( v7 );
  if ( v6 >= 0 )
  {
    if ( v6 == 258 )
    {
      v6 = -1073741248;
      goto LABEL_23;
    }
    switch ( LODWORD(v15[5]) )
    {
      case 0x10000001:
        goto LABEL_16;
      case 0x10000002:
        v6 = HIDWORD(v15[5]);
        if ( SHIDWORD(v15[5]) < 0 )
          goto LABEL_23;
        break;
      case 0x10000005:
LABEL_16:
        v11 = 0;
        if ( v15[173] )
        {
          Object[0] = v15[173];
          v11 = 1;
        }
        if ( v15[174] )
        {
          v12 = v11++;
          Object[v12] = v15[174];
        }
        if ( v11 )
          NtWaitForMultipleObjects(v11, Object, WaitAny, 0, 0LL);
        v6 = 0;
        goto LABEL_23;
    }
    v6 = -1073741823;
  }
LABEL_23:
  if ( v15[173] )
    NtClose(v15[173]);
  if ( v15[174] )
    NtClose(v15[174]);
  return (unsigned int)v6;
}
