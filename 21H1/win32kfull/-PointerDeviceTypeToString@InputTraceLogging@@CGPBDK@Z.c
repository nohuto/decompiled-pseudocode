/*
 * XREFs of ?PointerDeviceTypeToString@InputTraceLogging@@CGPBDK@Z @ 0x1492E5
 * Callers:
 *     ?InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0xF0CC8 (-InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__thiscall InputTraceLogging::PointerDeviceTypeToString(void *this)
{
  const char *result; // eax

  switch ( (unsigned int)this )
  {
    case 0u:
      result = "Unknown";
      break;
    case 1u:
      result = "SingleTouch";
      break;
    case 2u:
      result = "SerialTouch";
      break;
    case 3u:
      result = "ParallelACTouch";
      break;
    case 4u:
      result = "ParallelNullTouch";
      break;
    case 5u:
      result = "IntegratedPen";
      break;
    case 6u:
      result = "ExternalPen";
      break;
    case 7u:
      result = "Touchpad";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}
