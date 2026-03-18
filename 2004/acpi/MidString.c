/*
 * XREFs of MidString @ 0x1C0069BD0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 */

__int64 __fastcall MidString(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v17 = 0LL;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "TII");
  if ( !v6 )
  {
    v6 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v17);
    if ( !v6 )
    {
      v7 = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
      if ( v7 < 2u || v7 > 3u )
      {
        v6 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)a1, -1072431098);
        v12 = 107;
        goto LABEL_26;
      }
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = v7;
      v8 = *(_QWORD *)(a2 + 80);
      v9 = *(unsigned int *)(v8 + 24);
      v10 = *(_QWORD *)(v8 + 56);
      if ( v10 < v9 )
      {
        if ( *(_QWORD *)(v8 + 96) + v10 < v9 )
          v13 = *(_QWORD *)(v8 + 96);
        else
          v13 = v9 - v10;
        if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
        {
          v14 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v13 + 1);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v14;
          if ( !v14 )
          {
            v6 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError((__int64)a1, -1073741670);
            PrintDebugMessage(106, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v13 + 1;
        }
        else
        {
          v15 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v13);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v15;
          if ( !v15 )
          {
            v6 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError((__int64)a1, -1073741670);
            PrintDebugMessage(105, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v13;
        }
        if ( !v6 )
        {
          if ( v13 )
          {
            do
            {
              *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                                   + *(_QWORD *)(*(_QWORD *)(a2 + 80)
                                                                                               + 32LL)
                                                                                   + v10);
              ++v4;
            }
            while ( v4 < v13 );
          }
          return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
        }
      }
      else if ( *(_WORD *)(v8 + 2) == 2 )
      {
        v11 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 1u);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v11;
        if ( !v11 )
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError((__int64)a1, -1073741670);
          v12 = 105;
LABEL_26:
          PrintDebugMessage(v12, 0LL, 0LL, 0LL, 0LL);
          return v6;
        }
        **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
        return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
      }
    }
  }
  return v6;
}
