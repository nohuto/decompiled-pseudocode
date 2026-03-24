/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003CCFC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 */

__int64 __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  unsigned int *v8; // rbp
  int v9; // ecx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // r8d
  _DWORD v14[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v14[0] = 35076;
  v14[1] = 35348;
  v14[2] = 35620;
  result = *(_QWORD *)(v2 + 336);
  if ( (result & 0x80000000000000LL) != 0 )
  {
    v6 = 0;
    v7 = v14;
    do
    {
      v8 = (unsigned int *)(*(_QWORD *)(a1 + 24) + *v7);
      result = XilRegister_ReadUlong(a1, v8);
      v9 = *(_DWORD *)(a1 + 120);
      v10 = result;
      if ( a2 )
      {
        if ( (result & 0x2000000) != 0 )
          v11 = v9 | (1 << v6);
        else
          v11 = v9 & ~(1 << v6);
        *(_DWORD *)(a1 + 120) = v11;
      }
      else
      {
        v12 = result & 0xFDFFFFFF;
        v13 = v10 | 0x2000000;
        if ( !_bittest(&v9, v6) )
          v13 = v12;
        result = XilRegister_WriteUlong(a1, v8, v13);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 3 );
  }
  return result;
}
