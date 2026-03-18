/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x1C00144F0
 * Callers:
 *     Interrupter_D0Entry @ 0x1C00147A8 (Interrupter_D0Entry.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003BD84 (Interrupter_ControllerResetPostReset.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddi @ 0x1C00108BC (WPP_RECORDER_SF_qqdddi.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     Interrupter_UpdateERDP @ 0x1C0014370 (Interrupter_UpdateERDP.c)
 *     XilRegister_WriteUlong64 @ 0x1C0014420 (XilRegister_WriteUlong64.c)
 */

__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  int *v10; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  _DWORD *v14; // rdx
  signed __int32 v15[10]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = *(unsigned int *)(v4 + 124);
        v7 = *(_QWORD *)(v4 + 144);
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
        v21 = *(_QWORD *)(v7 + 24) + 16 * v6;
        v9 = *(_DWORD *)(v4 + 128);
        v20 = v6;
        v19 = v9;
        v18 = *(_DWORD *)(v4 + 120);
        v17 = v7;
        v16 = v4;
        WPP_RECORDER_SF_qqdddi(v8, v6, v7, 0x20u, v15[8]);
      }
      v10 = (int *)(*(_QWORD *)(v4 + 24) + 8LL);
      v11 = (unsigned __int16)*(_DWORD *)(v4 + 108);
      if ( *(_BYTE *)(v5 + 129) )
      {
        *v10 = v11;
        _InterlockedOr(v15, 0);
      }
      else
      {
        XilRegister_WriteUlong(v5, v10, v11);
      }
      Interrupter_UpdateERDP(v4, 1);
      v12 = *(_QWORD *)(v4 + 24);
      v13 = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL);
      v14 = (_DWORD *)(v12 + 16);
      if ( *(_BYTE *)(v5 + 129) )
      {
        result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL);
        if ( (result & 1) != 0 )
        {
          *v14 = v13;
          _InterlockedOr(v15, 0);
          *(_DWORD *)(v12 + 20) = HIDWORD(v13);
        }
        else
        {
          *(_QWORD *)v14 = v13;
        }
        _InterlockedOr(v15, 0);
      }
      else
      {
        result = XilRegister_WriteUlong64(v5, v14, v13);
      }
    }
  }
  return result;
}
