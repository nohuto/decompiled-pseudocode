/*
 * XREFs of ValidateArgTypes @ 0x1C00162B0
 * Callers:
 *     DerefOf @ 0x1C000A880 (DerefOf.c)
 *     Package @ 0x1C00122B0 (Package.c)
 *     LogOp2 @ 0x1C0015E30 (LogOp2.c)
 *     IfElse @ 0x1C0015FE0 (IfElse.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     CreateXField @ 0x1C0018484 (CreateXField.c)
 *     Buffer @ 0x1C0018F50 (Buffer.c)
 *     Index @ 0x1C0019050 (Index.c)
 *     LNot @ 0x1C00191C0 (LNot.c)
 *     Release @ 0x1C001C1A0 (Release.c)
 *     Acquire @ 0x1C001C290 (Acquire.c)
 *     While @ 0x1C001C380 (While.c)
 *     ToInteger @ 0x1C001C4B0 (ToInteger.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     OSInterface @ 0x1C0022310 (OSInterface.c)
 *     ResetSignal @ 0x1C0026970 (ResetSignal.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     LogOp2_32 @ 0x1C00276D0 (LogOp2_32.c)
 *     ConcatenateResTemplate @ 0x1C00277F0 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C0028D90 (MidString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     Wait @ 0x1C002A600 (Wait.c)
 *     ExprOp1_64 @ 0x1C002BDF0 (ExprOp1_64.c)
 *     Notify @ 0x1C00319E0 (Notify.c)
 *     Divide @ 0x1C0031B20 (Divide.c)
 *     ExprOp2_32 @ 0x1C0031BC2 (ExprOp2_32.c)
 *     Fatal @ 0x1C0069C60 (Fatal.c)
 *     SleepStall @ 0x1C0069CD0 (SleepStall.c)
 *     Unload @ 0x1C0069DD0 (Unload.c)
 *     ExprOp1_32 @ 0x1C0069F64 (ExprOp1_32.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 *     Match_32 @ 0x1C006A5F8 (Match_32.c)
 *     Match_64 @ 0x1C006A71C (Match_64.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C006AEE0 (ToBuffer.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     ToString @ 0x1C006B340 (ToString.c)
 * Callees:
 *     ConvertToInteger @ 0x1C001C420 (ConvertToInteger.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     ConvertToBuffer @ 0x1C006B518 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006B650 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v6; // r9d
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // r12
  _WORD *v12; // rdi
  _BYTE *v13; // r13
  int ObjectTypeName; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v6 = 0;
  v8 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  v11 = (int)v10;
  if ( (int)v10 <= 0 )
    return 0LL;
  v12 = (_WORD *)(a2 + 2);
  v13 = a4;
  do
  {
    if ( v6 )
      break;
    if ( *v13 == 73 )
    {
      if ( *v12 != 1 && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
      {
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
        v16 = 198;
LABEL_64:
        PrintDebugMessage(v16, v8, ObjectTypeName, 0, 0LL);
        v6 = -1072431096;
      }
    }
    else
    {
      switch ( *v13 )
      {
        case 'A':
          if ( *v12 != 129 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v18 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(195, v8, v18, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'B':
          if ( *v12 != 3 && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 193;
            goto LABEL_64;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v12 - 3) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v22 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(194, v8, v22, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v19 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(199, v8, v19, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && *v12 != 15
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v20 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(200, v8, v20, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'F':
          if ( *v12 != 5 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 197;
            goto LABEL_64;
          }
          break;
        case 'H':
          if ( *v12 == 1 )
          {
            if ( !a3 || (v6 = ConvertToDDBHandle(a2 + 40LL * v8, a2 + 40LL * v8)) != 0 )
            {
              LogError(3222536201LL);
              AcpiDiagTraceAmlError(a1, 3222536201LL);
              v23 = GetObjectTypeName((unsigned __int16)*v12);
              PrintDebugMessage(196, v8, v23, 0, 0LL);
              v6 = -1072431095;
            }
          }
          else if ( *v12 != 15 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 196;
            goto LABEL_64;
          }
          break;
        case 'O':
          if ( *v12 != 128 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v17 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(201, v8, v17, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'P':
          if ( *v12 != 4 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 202;
            goto LABEL_64;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v12 - 128) > 1u && *v12 != 14 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 203;
            goto LABEL_64;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v12 - 2) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(204, v8, v21, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v12 != 2 && (!a3 || (v6 = ConvertToString(a2 + 40LL * v8, 0LL, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 205;
            goto LABEL_64;
          }
          break;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(206, (char)*v13, 0, 0, 0LL);
          v6 = -1072431101;
          break;
      }
    }
    ++v13;
    ++v8;
    v12 += 20;
  }
  while ( v13 - a4 < v11 );
  return v6;
}
