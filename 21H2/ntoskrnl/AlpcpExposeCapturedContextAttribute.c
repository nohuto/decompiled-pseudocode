/*
 * XREFs of AlpcpExposeCapturedContextAttribute @ 0x1405F1EC0
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall AlpcpExposeCapturedContextAttribute(int a1, _DWORD *a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rcx

  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( (a3 & 0x20000000) != 0 )
    {
      v4 = a3;
      v5 = a3 & 0x40000000;
      v6 = v4 >> 63;
      if ( a1 < 0 )
      {
        v9 = (v6 & 0xC) + 8;
        v10 = v9 + 16;
        if ( !v5 )
          v10 = v9;
        v11 = (_DWORD *)(a4 + v10);
        *v11 = *a2;
        v11[1] = a2[2];
        v11[2] = a2[4];
        v11[3] = a2[5];
        v11[4] = a2[6];
      }
      else
      {
        v7 = (v6 & 0x18) + 8;
        v8 = v7 + 32;
        if ( !v5 )
          v8 = v7;
        *(_OWORD *)(v8 + a4) = *(_OWORD *)a2;
        *(_OWORD *)(v8 + a4 + 16) = *((_OWORD *)a2 + 1);
      }
      if ( *(_QWORD *)a2 )
        *(_DWORD *)(a4 + 4) |= 0x20000000u;
    }
  }
}
