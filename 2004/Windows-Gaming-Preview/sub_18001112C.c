/*
 * XREFs of sub_18001112C @ 0x18001112C
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 * Callees:
 *     sub_1800038C8 @ 0x1800038C8 (sub_1800038C8.c)
 *     sub_180003BA8 @ 0x180003BA8 (sub_180003BA8.c)
 *     sub_180010E20 @ 0x180010E20 (sub_180010E20.c)
 *     sub_180010F38 @ 0x180010F38 (sub_180010F38.c)
 *     memset @ 0x1800453CC (memset.c)
 */

__int64 (__fastcall *__fastcall sub_18001112C(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4))(__int64, _QWORD *)
{
  int v6; // esi
  char v7; // al
  DWORD CurrentThreadId; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v12[18]; // [rsp+20h] [rbp-98h] BYREF

  v6 = a1;
  if ( *(_QWORD *)a2 )
    v7 = sub_180010E20(a2, v12, a1);
  else
    v7 = 0;
  if ( !v7 )
  {
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[7]) = *(unsigned __int16 *)(a4 + 24);
    v12[6] = *(_QWORD *)(a4 + 8);
    v12[16] = *(_QWORD *)a4;
    HIDWORD(v12[0]) = v6;
    CurrentThreadId = GetCurrentThreadId();
    a1 = (unsigned int)dword_18005AC6C;
    if ( dword_18005AC6C != CurrentThreadId )
    {
      a1 = (unsigned int)_InterlockedIncrement(&dword_18005AC80);
      if ( (int)a1 < 4 )
      {
        dword_18005AC6C = CurrentThreadId;
        v10 = sub_180003BA8(0, v9);
        if ( v10 )
          sub_1800038C8(v10, (__int64)v12);
        dword_18005AC6C = 0;
      }
      _InterlockedDecrement(&dword_18005AC80);
    }
    if ( *(_QWORD *)a2 )
      sub_180010E20(a2, v12, v6);
  }
  return sub_180010F38(a1, (__int64)v12, a4);
}
