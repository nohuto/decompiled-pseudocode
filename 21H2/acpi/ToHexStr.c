/*
 * XREFs of ToHexStr @ 0x1C0028EF0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ToHexStr(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  _SLIST_ENTRY *v6; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbp
  _SLIST_ENTRY *v11; // rax
  __int64 v12; // r8
  unsigned __int64 i; // r9
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  _SLIST_ENTRY *v17; // rax
  __int64 v18; // rbp
  __int64 j; // r11
  __int64 v20; // r11
  __int64 v21; // r11
  unsigned int v22; // r9d
  __int64 v23; // r11
  __int64 v24; // r11
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  v25 = 0LL;
  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !v4 )
  {
    v4 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v25);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v8 = *(_QWORD *)(v5 + 16);
          LODWORD(v9) = 2;
          do
          {
            v10 = (int)v9;
            v9 = (unsigned int)(v9 + 1);
            v8 >>= 4;
          }
          while ( v8 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n");
          v11 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v11;
          if ( v11 )
          {
            v12 = v10;
            **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 48;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 1LL) = 120;
            for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL); v12 >= 2; --v12 )
            {
              v14 = i & 0xF;
              i >>= 4;
              *(_BYTE *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v14];
            }
            goto LABEL_14;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n");
          v6 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v6;
          if ( v6 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v16 = *(_DWORD *)(v5 + 24);
          if ( v16 )
            v9 = (unsigned int)(v16 + 4 * v16 - 1);
          else
            v9 = 0LL;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9 + 1;
          ConPrintf("length=%x,size=%x\n");
          v17 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v17;
          if ( v17 )
          {
            v18 = 0LL;
            for ( j = 0LL; (unsigned int)v18 < *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL); j = (unsigned int)(v24 + 1) )
            {
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 48;
              v20 = (unsigned int)(j + 1);
              *(_BYTE *)(v20 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 120;
              v21 = (unsigned int)(v20 + 1);
              v22 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL) + v18);
              v18 = (unsigned int)(v18 + 1);
              *(_BYTE *)(v21 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned __int64)v22 >> 4];
              v23 = (unsigned int)(v21 + 1);
              *(_BYTE *)(v23 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v22 & 0xF];
              v24 = (unsigned int)(v23 + 1);
              *(_BYTE *)(v24 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_14:
            *(_BYTE *)(v9 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(3222536198LL);
          AcpiDiagTraceAmlError(a1, 3222536198LL);
          v15 = 188;
LABEL_25:
          PrintDebugMessage(v15, 0, 0, 0, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      v15 = 187;
      goto LABEL_25;
    }
  }
  return v4;
}
