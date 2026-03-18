/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C003D278
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 */

__int64 __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  unsigned int *v8; // rbp
  int v9; // r8d
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  _DWORD v15[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v15[0] = 35076;
  v15[1] = 35348;
  v15[2] = 35620;
  result = *(_QWORD *)(v2 + 336);
  if ( (result & 0x80000000000000LL) != 0 )
  {
    v6 = 0;
    v7 = v15;
    do
    {
      v8 = (unsigned int *)(*(_QWORD *)(a1 + 24) + *v7);
      result = XilRegister_ReadUlong(a1, v8);
      v9 = result;
      if ( a2 )
      {
        v10 = *(_DWORD *)(a1 + 116);
        if ( (result & 0x2000000) != 0 )
          v11 = v10 | (1 << v6);
        else
          v11 = v10 & ~(1 << v6);
        *(_DWORD *)(a1 + 116) = v11;
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 116);
        v13 = v9 & 0xFDFFFFFF;
        v14 = v9 | 0x2000000;
        if ( !_bittest(&v12, v6) )
          v14 = v13;
        result = XilRegister_WriteUlong(a1, v8, v14);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 3 );
  }
  return result;
}
