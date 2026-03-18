/*
 * XREFs of CopyObjBuffer @ 0x1C0022A08
 * Callers:
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 * Callees:
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     GetObjectTypeName @ 0x1C00652C8 (GetObjectTypeName.c)
 */

__int64 __fastcall CopyObjBuffer(void *a1, size_t Size, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  int v7; // r8d
  const void *v8; // rdi
  unsigned int v9; // ebx
  int v11; // r8d
  int ObjectTypeName; // eax

  v4 = Size;
  v5 = 0;
  v7 = *(unsigned __int16 *)(a3 + 2) - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(0LL, 3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(30, ObjectTypeName, 0, 0, 0LL);
        return (unsigned int)-1072431095;
      }
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v8 = *(const void **)(a3 + 32);
      v9 = *(_DWORD *)(a3 + 24) - 1;
    }
  }
  else
  {
    v8 = (const void *)(a3 + 16);
    v9 = 8;
  }
  if ( a1 != v8 )
  {
    memset(a1, 0, (unsigned int)Size);
    if ( v4 <= v9 )
      v9 = v4;
    memmove(a1, v8, v9);
  }
  return v5;
}
