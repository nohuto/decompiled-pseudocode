/*
 * XREFs of sub_18001EE38 @ 0x18001EE38
 * Callers:
 *     sub_180022FD8 @ 0x180022FD8 (sub_180022FD8.c)
 *     PbmGetSoundLevel @ 0x180023720 (PbmGetSoundLevel.c)
 * Callees:
 *     sub_180017100 @ 0x180017100 (sub_180017100.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_180028AD8 @ 0x180028AD8 (sub_180028AD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001EE38(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  volatile signed __int32 *v10; // rdx
  unsigned int v11; // ebx
  volatile signed __int32 *v13; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h]

  HIDWORD(v13) = HIDWORD(a1);
  v8 = qword_18004FE78;
  LODWORD(v13) = 2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v14 = v9;
  if ( a3 )
  {
    sub_180017100(a2 + 16, a3, a4, a5, &v13);
    v11 = (unsigned int)v13;
  }
  else
  {
    v10 = *(volatile signed __int32 **)(a2 + 256);
    v13 = v10;
    if ( !v10 )
    {
      if ( (int)sub_18001DBC4(
                  v8,
                  *(const WCHAR **)(a2 + 208),
                  *(_QWORD *)(a2 + 240),
                  *(_DWORD *)(a2 + 196),
                  &v13,
                  0,
                  0LL) < 0 )
      {
        v11 = (unsigned int)sub_180028AD8(*(_DWORD *)(a2 + 196)) == 0 ? 2 : 0;
        goto LABEL_8;
      }
      v10 = v13;
    }
    v11 = sub_18001EA68(v8, v10);
  }
LABEL_8:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v11;
}
