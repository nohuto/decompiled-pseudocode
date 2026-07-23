/*
 * XREFs of PipInitializeDriverDependentDLLs @ 0x140A5E5DC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     MmCallDllInitialize @ 0x1407AC690 (MmCallDllInitialize.c)
 *     PnpDoPolicyCheck @ 0x140A5FB20 (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140A5FB80 (PnpNotifyEarlyLaunchImageLoad.c)
 */

unsigned __int8 __fastcall PipInitializeDriverDependentDLLs(int a1, __int64 a2)
{
  unsigned __int8 result; // al
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  bool v7; // cl
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rdx
  _QWORD v11[14]; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v12; // [rsp+C0h] [rbp+67h] BYREF

  result = (unsigned __int8)memset(v11, 0, 0x68uLL);
  v12 = 0;
  v5 = (_QWORD *)(a2 + 16);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v8 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    if ( (*(_DWORD *)(v8 + 104) & 0x4000000) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 228);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          v7 = (*(_DWORD *)(v8 + 228) & 2) != 0;
LABEL_3:
          if ( v7 )
          {
            if ( a1 )
            {
              v12 = 0;
              LODWORD(v11[0]) = 0;
              *(_OWORD *)&v11[1] = *(_OWORD *)(v8 + 72);
              HIDWORD(v11[0]) = *(_DWORD *)(v8 + 224) & 1;
              LODWORD(v11[11]) = *(_DWORD *)(v8 + 208);
              LODWORD(v11[12]) = *(_DWORD *)(v8 + 216);
              v11[9] = *(_QWORD *)(v8 + 192);
              HIDWORD(v11[11]) = *(_DWORD *)(v8 + 212);
              HIDWORD(v11[12]) = *(_DWORD *)(v8 + 220);
              v11[10] = *(_QWORD *)(v8 + 200);
              v11[4] = &word_140A77190;
              v11[3] = 0x20000LL;
              *(_OWORD *)&v11[7] = *(_OWORD *)(v8 + 176);
              *(_OWORD *)&v11[5] = *(_OWORD *)(v8 + 160);
              PnpNotifyEarlyLaunchImageLoad(v11, &v12);
              LOBYTE(v10) = a1 != 1;
              result = PnpDoPolicyCheck(v12, v10);
            }
            else
            {
              result = 1;
            }
            if ( result )
              result = MmCallDllInitialize(v8, (__int64)v5);
          }
        }
        else if ( a1 == 2 )
        {
          v7 = (v9 & 3) == 0;
          goto LABEL_3;
        }
      }
      else if ( (v9 & 1) != 0 )
      {
        v7 = 1;
        goto LABEL_3;
      }
    }
  }
  return result;
}
