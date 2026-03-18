/*
 * XREFs of NtDCompositionCreateChannel @ 0x1C00651C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0064EE8 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0067B5C (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionCreateChannel(unsigned int *a1, unsigned int *a2, void **a3, __int64 a4)
{
  unsigned int *v6; // rsi
  unsigned int **v7; // rdx
  int v8; // ebx
  unsigned int *v9; // rax
  _QWORD *v10; // rdx
  int v12; // [rsp+20h] [rbp-38h]
  unsigned int v13; // [rsp+24h] [rbp-34h] BYREF
  void *v14; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = a1;
  v13 = 0;
  v15 = 0;
  v14 = 0LL;
  if ( a1 )
  {
    v7 = (unsigned int **)MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned int *)MmUserProbeAddress;
    *a1 = *a1;
    v8 = 0;
    v12 = 0;
  }
  else
  {
    v8 = -1073741811;
    v12 = -1073741811;
    v7 = (unsigned int **)MmUserProbeAddress;
  }
  if ( a2 )
  {
    v9 = a2;
    if ( a2 + 1 < a2 || a2 + 1 > *v7 )
      v9 = *v7;
    v15 = *v9;
    if ( v15 )
    {
      v10 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = *v10;
      v8 = v12;
    }
  }
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::Create(&v13, &v15, &v14, a4);
    if ( v8 >= 0 )
    {
      *v6 = v13;
      if ( v15 )
      {
        *a2 = v15;
        *a3 = v14;
      }
    }
  }
  return (unsigned int)v8;
}
